

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example2.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "example2.hpp"
#include "example2Plugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- exampleStruct: 

exampleStruct::exampleStruct()  {
}   

exampleStruct::exampleStruct (
    const myStruct& structMember)
    :
        m_structMember_( structMember ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
exampleStruct::exampleStruct(exampleStruct&& other_) OMG_NOEXCEPT  :m_structMember_ (std::move(other_.m_structMember_))
{
} 

exampleStruct& exampleStruct::operator=(exampleStruct&&  other_) OMG_NOEXCEPT {
    exampleStruct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void exampleStruct::swap(exampleStruct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_structMember_, other_.m_structMember_);
}  

bool exampleStruct::operator == (const exampleStruct& other_) const {
    if (m_structMember_ != other_.m_structMember_) {
        return false;
    }
    return true;
}
bool exampleStruct::operator != (const exampleStruct& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
myStruct& exampleStruct::structMember() OMG_NOEXCEPT {
    return m_structMember_;
}

const myStruct& exampleStruct::structMember() const OMG_NOEXCEPT {
    return m_structMember_;
}

void exampleStruct::structMember(const myStruct& value) {
    m_structMember_ = value;
}

std::ostream& operator << (std::ostream& o,const exampleStruct& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "structMember: " << sample.structMember() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<exampleStruct> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member exampleStruct_g_tc_members[1]=
                {

                    {
                        (char *)"structMember",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode exampleStruct_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"exampleStruct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        exampleStruct_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for exampleStruct*/

                if (is_initialized) {
                    return &exampleStruct_g_tc;
                }

                exampleStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< myStruct>::get().native();

                is_initialized = RTI_TRUE;

                return &exampleStruct_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<exampleStruct>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<exampleStruct>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<exampleStruct>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                exampleStructPlugin_new,
                exampleStructPlugin_delete);
        }

        std::vector<char>& topic_type_support<exampleStruct>::to_cdr_buffer(
            std::vector<char>& buffer, const exampleStruct& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = exampleStructPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = exampleStructPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<exampleStruct>::from_cdr_buffer(exampleStruct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = exampleStructPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create exampleStruct from cdr buffer");
        }

        void topic_type_support<exampleStruct>::reset_sample(exampleStruct& sample) 
        {
            rti::topic::reset_sample(sample.structMember());
        }

        void topic_type_support<exampleStruct>::allocate_sample(exampleStruct& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.structMember(),  -1, -1);
        }

    }
}  

