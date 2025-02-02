/* Copyright (C) 2020-2022 Greenbone AG
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef BOREAS_IO_H
#define BOREAS_IO_H

#include "../base/hosts.h"
#include "../util/kb.h"
#include "alivedetection.h"
#include "boreas_error.h"

gvm_host_t *
get_host_from_queue (kb_t, gboolean *);

void
put_host_on_queue (kb_t, char *);

void
put_finish_signal_on_queue (void *);

void realloc_finish_signal_on_queue (kb_t);

int finish_signal_on_queue (kb_t);

void
send_dead_hosts_to_ospd_openvas (int);

void
init_scan_restrictions (scanner_t *, int);

void
handle_scan_restrictions (scanner_t *, gchar *);

gchar *
get_openvas_scan_id (const gchar *, int);

boreas_error_t
get_alive_test_methods (alive_test_t *);

const gchar *
get_alive_test_ports (void);

unsigned int
get_alive_test_wait_timeout (void);

int
get_alive_hosts_count (void);

#endif /* not BOREAS_IO_H */
