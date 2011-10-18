/*
 * The Shadow Simulator
 *
 * Copyright (c) 2010-2011 Rob Jansen <jansen@cs.umn.edu>
 * Copyright (c) 2006-2009 Tyson Malchow <tyson.malchow@gmail.com>
 *
 * This file is part of Shadow.
 *
 * Shadow is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Shadow is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Shadow.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _rand_h
#define _rand_h

gdouble dvn_rand_unit();
guint dvn_rand_fast(guint max);
guint dvn_rand(guint max);
void dvn_rand_seed(guint seed);

gint *gint_key(gint key);
gint gint_compare_func(gpointer a, gpointer b);
gboolean g_int16_equal(gconstpointer v1, gconstpointer v2);
guint g_int16_hash(gconstpointer v1);

#endif
