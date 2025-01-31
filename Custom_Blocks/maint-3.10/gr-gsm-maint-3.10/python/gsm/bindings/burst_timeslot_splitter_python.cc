/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(flow_control/burst_timeslot_splitter.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1cfb084acd59b4e3c9d3bfcec86c9107)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/flow_control/burst_timeslot_splitter.h>
// pydoc.h is automatically generated in the build directory
#include <burst_timeslot_splitter_pydoc.h>

void bind_burst_timeslot_splitter(py::module& m)
{

    using burst_timeslot_splitter    = ::gr::gsm::burst_timeslot_splitter;


    py::class_<burst_timeslot_splitter, gr::block, gr::basic_block,
        std::shared_ptr<burst_timeslot_splitter>>(m, "burst_timeslot_splitter", D(burst_timeslot_splitter))

        .def(py::init(&burst_timeslot_splitter::make),
           D(burst_timeslot_splitter,make)
        )
        



        ;




}








