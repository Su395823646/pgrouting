/*PGR-GNU*****************************************************************
File: max_flow_many_to_many_driver.h

Generated with Template by:
Copyright (c) 2015 pgRouting developers
Mail: project@pgrouting.org

Function's developer:
Copyright (c) 2016 Andrea Nardelli
Mail: nrd.nardelli@gmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

********************************************************************PGR-GNU*/

#ifndef SRC_MAX_FLOW_SRC_MAX_FLOW_DRIVER_H_
#define SRC_MAX_FLOW_SRC_MAX_FLOW_DRIVER_H_

#include "c_types/pgr_flow_t.h"
#include "c_types/pgr_edge_t.h"

#ifdef __cplusplus
extern "C" {
#endif

    void
        do_pgr_max_flow(
            pgr_edge_t *data_edges,
            size_t total_tuples,
            int64_t* source_vertices,
            size_t size_source_verticesArr,
            int64_t* sink_vertices,
            size_t size_sink_verticesArr,
            int algorithm,
            bool only_flow,
            pgr_flow_t **return_tuples,
            size_t *return_count,
            char** log_msg,
            char** notice_msg,
            char** err_msg);


#ifdef __cplusplus
}
#endif

#endif  // SRC_MAX_FLOW_SRC_MAX_FLOW_DRIVER_H_
