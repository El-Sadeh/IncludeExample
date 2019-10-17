

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from example.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef example_1944007734_hpp
#define example_1944007734_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator<double>;
template class NDDSUSERDllExport std::vector<double >;
#endif
class NDDSUSERDllExport myStruct {

  public:
    myStruct();

    myStruct(
        int32_t gal,
        int16_t elad,
        const std::string& name,
        const rti::core::bounded_sequence<double, 20>& deoubleSec);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    myStruct (myStruct&&) = default;
    myStruct& operator=(myStruct&&) = default;
    myStruct& operator=(const myStruct&) = default;
    myStruct(const myStruct&) = default;
    #else
    myStruct(myStruct&& other_) OMG_NOEXCEPT;  
    myStruct& operator=(myStruct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& gal() OMG_NOEXCEPT; 
    const int32_t& gal() const OMG_NOEXCEPT;
    void gal(int32_t value);

    int16_t& elad() OMG_NOEXCEPT; 
    const int16_t& elad() const OMG_NOEXCEPT;
    void elad(int16_t value);

    std::string& name() OMG_NOEXCEPT; 
    const std::string& name() const OMG_NOEXCEPT;
    void name(const std::string& value);

    rti::core::bounded_sequence<double, 20>& deoubleSec() OMG_NOEXCEPT; 
    const rti::core::bounded_sequence<double, 20>& deoubleSec() const OMG_NOEXCEPT;
    void deoubleSec(const rti::core::bounded_sequence<double, 20>& value);

    bool operator == (const myStruct& other_) const;
    bool operator != (const myStruct& other_) const;

    void swap(myStruct& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_gal_;
    int16_t m_elad_;
    std::string m_name_;
    rti::core::bounded_sequence<double, 20> m_deoubleSec_;

};

inline void swap(myStruct& a, myStruct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const myStruct& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<myStruct> {
            NDDSUSERDllExport static std::string value() {
                return "myStruct";
            }
        };

        template<>
        struct is_topic_type<myStruct> : public dds::core::true_type {};

        template<>
        struct topic_type_support<myStruct> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const myStruct& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(myStruct& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(myStruct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(myStruct& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<myStruct> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<myStruct> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // example_1944007734_hpp

