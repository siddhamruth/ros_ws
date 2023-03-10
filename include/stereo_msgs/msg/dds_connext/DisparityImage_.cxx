

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DisparityImage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "DisparityImage_.h"

#include <new>

namespace stereo_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *DisparityImage_TYPENAME = "stereo_msgs::msg::dds_::DisparityImage_";

            DDS_TypeCode* DisparityImage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DisparityImage__g_tc_members[8]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"image_",/* Member name */
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
                        (char *)"f_",/* Member name */
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
                        (char *)"t_",/* Member name */
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
                    }, 
                    {
                        (char *)"valid_window_",/* Member name */
                        {
                            4,/* Representation ID */          
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
                        (char *)"min_disparity_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"max_disparity_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"delta_d_",/* Member name */
                        {
                            7,/* Representation ID */          
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

                static DDS_TypeCode DisparityImage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"stereo_msgs::msg::dds_::DisparityImage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        DisparityImage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DisparityImage_*/

                if (is_initialized) {
                    return &DisparityImage__g_tc;
                }

                DisparityImage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                DisparityImage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::Image__get_typecode();

                DisparityImage__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                DisparityImage__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                DisparityImage__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::RegionOfInterest__get_typecode();

                DisparityImage__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                DisparityImage__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                DisparityImage__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &DisparityImage__g_tc;
            }

            RTIBool DisparityImage__initialize(
                DisparityImage_* sample) {
                return stereo_msgs::msg::dds_::DisparityImage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DisparityImage__initialize_ex(
                DisparityImage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return stereo_msgs::msg::dds_::DisparityImage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DisparityImage__initialize_w_params(
                DisparityImage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!sensor_msgs::msg::dds_::Image__initialize_w_params(&sample->image_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->f_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->t_)) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::RegionOfInterest__initialize_w_params(&sample->valid_window_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->min_disparity_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->max_disparity_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->delta_d_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void DisparityImage__finalize(
                DisparityImage_* sample)
            {

                stereo_msgs::msg::dds_::DisparityImage__finalize_ex(sample,RTI_TRUE);
            }

            void DisparityImage__finalize_ex(
                DisparityImage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                stereo_msgs::msg::dds_::DisparityImage__finalize_w_params(
                    sample,&deallocParams);
            }

            void DisparityImage__finalize_w_params(
                DisparityImage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                sensor_msgs::msg::dds_::Image__finalize_w_params(&sample->image_,deallocParams);

                sensor_msgs::msg::dds_::RegionOfInterest__finalize_w_params(&sample->valid_window_,deallocParams);

            }

            void DisparityImage__finalize_optional_members(
                DisparityImage_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                sensor_msgs::msg::dds_::Image__finalize_optional_members(&sample->image_, deallocParams->delete_pointers);
                sensor_msgs::msg::dds_::RegionOfInterest__finalize_optional_members(&sample->valid_window_, deallocParams->delete_pointers);
            }

            RTIBool DisparityImage__copy(
                DisparityImage_* dst,
                const DisparityImage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!sensor_msgs::msg::dds_::Image__copy(
                        &dst->image_,(const sensor_msgs::msg::dds_::Image_*)&src->image_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->f_, &src->f_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->t_, &src->t_)) { 
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::RegionOfInterest__copy(
                        &dst->valid_window_,(const sensor_msgs::msg::dds_::RegionOfInterest_*)&src->valid_window_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->min_disparity_, &src->min_disparity_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->max_disparity_, &src->max_disparity_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->delta_d_, &src->delta_d_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'DisparityImage_' sequence class.
            */
            #define T DisparityImage_
            #define TSeq DisparityImage_Seq

            #define T_initialize_w_params stereo_msgs::msg::dds_::DisparityImage__initialize_w_params

            #define T_finalize_w_params   stereo_msgs::msg::dds_::DisparityImage__finalize_w_params
            #define T_copy       stereo_msgs::msg::dds_::DisparityImage__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace stereo_msgs  */

