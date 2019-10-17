

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "example.hpp"
#include "examplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- myStruct: 

myStruct::myStruct() :
    m_gal_ (0) ,
    m_elad_ (0)  {
}   

myStruct::myStruct (
    int32_t gal,
    int16_t elad,
    const std::string& name,
    const rti::core::bounded_sequence<double, 20>& deoubleSec)
    :
        m_gal_( gal ),
        m_elad_( elad ),
        m_name_( name ),
        m_deoubleSec_( deoubleSec ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
myStruct::myStruct(myStruct&& other_) OMG_NOEXCEPT  :m_gal_ (std::move(other_.m_gal_))
,
m_elad_ (std::move(other_.m_elad_))
,
m_name_ (std::move(other_.m_name_))
,
m_deoubleSec_ (std::move(other_.m_deoubleSec_))
{
} 

myStruct& myStruct::operator=(myStruct&&  other_) OMG_NOEXCEPT {
    myStruct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void myStruct::swap(myStruct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_gal_, other_.m_gal_);
    swap(m_elad_, other_.m_elad_);
    swap(m_name_, other_.m_name_);
    swap(m_deoubleSec_, other_.m_deoubleSec_);
}  

bool myStruct::operator == (const myStruct& other_) const {
    if (m_gal_ != other_.m_gal_) {
        return false;
    }
    if (m_elad_ != other_.m_elad_) {
        return false;
    }
    if (m_name_ != other_.m_name_) {
        return false;
    }
    if (m_deoubleSec_ != other_.m_deoubleSec_) {
        return false;
    }
    return true;
}
bool myStruct::operator != (const myStruct& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& myStruct::gal() OMG_NOEXCEPT {
    return m_gal_;
}

const int32_t& myStruct::gal() const OMG_NOEXCEPT {
    return m_gal_;
}

void myStruct::gal(int32_t value) {
    m_gal_ = value;
}

int16_t& myStruct::elad() OMG_NOEXCEPT {
    return m_elad_;
}

const int16_t& myStruct::elad() const OMG_NOEXCEPT {
    return m_elad_;
}

void myStruct::elad(int16_t value) {
    m_elad_ = value;
}

std::string& myStruct::name() OMG_NOEXCEPT {
    return m_name_;
}

const std::string& myStruct::name() const OMG_NOEXCEPT {
    return m_name_;
}

void myStruct::name(const std::string& value) {
    m_name_ = value;
}

rti::core::bounded_sequence<double, 20>& myStruct::deoubleSec() OMG_NOEXCEPT {
    return m_deoubleSec_;
}

const rti::core::bounded_sequence<double, 20>& myStruct::deoubleSec() const OMG_NOEXCEPT {
    return m_deoubleSec_;
}

void myStruct::deoubleSec(const rti::core::bounded_sequence<double, 20>& value) {
    m_deoubleSec_ = value;
}

std::ostream& operator << (std::ostream& o,const myStruct& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "gal: " << sample.gal()<<", ";
    o << "elad: " << sample.elad()<<", ";
    o << "name: " << sample.name()<<", ";
    o << "deoubleSec: " << sample.deoubleSec() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<myStruct> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode myStruct_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((20));
                static DDS_TypeCode myStruct_g_tc_deoubleSec_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((20),NULL);
                static DDS_TypeCode_Member myStruct_g_tc_members[4]=
                {

                    {
                        (char *)"gal",/* Member name */
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
                    }, 
                    {
                        (char *)"elad",/* Member name */
                        {
                            1,/* Representation ID */          
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
                    }, 
                    {
                        (char *)"name",/* Member name */
                        {
                            2,/* Representation ID */          
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
                    }, 
                    {
                        (char *)"deoubleSec",/* Member name */
                        {
                            3,/* Representation ID */          
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

                static DDS_TypeCode myStruct_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"myStruct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        myStruct_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for myStruct*/

                if (is_initialized) {
                    return &myStruct_g_tc;
                }

                myStruct_g_tc_deoubleSec_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                myStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                myStruct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                myStruct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&myStruct_g_tc_name_string;

                myStruct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& myStruct_g_tc_deoubleSec_sequence;

                is_initialized = RTI_TRUE;

                return &myStruct_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<myStruct>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<myStruct>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<myStruct>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                myStructPlugin_new,
                myStructPlugin_delete);
        }

        std::vector<char>& topic_type_support<myStruct>::to_cdr_buffer(
            std::vector<char>& buffer, const myStruct& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = myStructPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = myStructPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<myStruct>::from_cdr_buffer(myStruct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = myStructPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create myStruct from cdr buffer");
        }

        void topic_type_support<myStruct>::reset_sample(myStruct& sample) 
        {
            rti::topic::reset_sample(sample.gal());
            rti::topic::reset_sample(sample.elad());
            rti::topic::reset_sample(sample.name());
            rti::topic::reset_sample(sample.deoubleSec());
        }

        void topic_type_support<myStruct>::allocate_sample(myStruct& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.name(),  -1, 20);
            rti::topic::allocate_sample(sample.deoubleSec(),  20, -1);
        }

    }
}  

