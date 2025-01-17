/* -------------------------------------------------------------------------
 * A repertory of multi primitive-to-primitive (MP2P) ICP algorithms in C++
 * Copyright (C) 2018-2023 Jose Luis Blanco, University of Almeria
 * See LICENSE for license information.
 * ------------------------------------------------------------------------- */
/**
 * @file   register.cpp
 * @brief  RTTI registry
 * @author Jose Luis Blanco Claraco
 * @date   Jun 10, 2019
 */

#include <mp2p_icp/metricmap.h>
#include <mrpt/core/initializer.h>

MRPT_INITIALIZER(register_mp2p_icp_map)
{
    using mrpt::rtti::registerClass;

    registerClass(CLASS_ID(mp2p_icp::metric_map_t));
}
