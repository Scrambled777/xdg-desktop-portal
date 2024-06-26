/*
 * Copyright © 2024 Red Hat, Inc
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "xdp-utils.h"

#include "xdp-app-info.h"

XDP_EXPORT_TEST
int _xdp_parse_cgroup_file (FILE     *f,
                            gboolean *is_snap);

#ifdef HAVE_LIBSYSTEMD
XDP_EXPORT_TEST
char * _xdp_parse_app_id_from_unit_name (const char *unit);
#endif
