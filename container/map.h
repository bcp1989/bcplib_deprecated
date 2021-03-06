/* 
 * File:   map.h
 * Author: Yirui Zhang
 *
 * Created on November 24, 2012, 8:32 PM
 * 
 *  bcplib is a object-oriented c library of common data structures and 
 *  algorithms. 
 * 
 *  Copyright (C) <2012>  <Yirui Zhang>
 * 
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Abstract class Map.
 */

#ifndef MAP_H
#define	MAP_H
#include "set.h"
// Begin of class map entry
BEGIN_DEFINE_CLASS(map_entry)
// define map entry prototype
#define map_entry_prototype     void* key;\
                                void* value
END_DEFINE_CLASS(map_entry)
// Begin of class map       
BEGIN_DEFINE_CLASS(map)
// define function types
typedef void (*map_clear_t)(id);
typedef bool (*map_contains_key_t)(id, void*);
typedef bool (*map_contains_value_t)(id, void*, comparator);
typedef set (*map_entry_set_t)(id);
typedef void* (*map_get_t)(id, void*);
typedef bool (*map_is_empty_t)(id);
typedef set (*map_key_set_t)(id);
typedef void* (*map_put_t)(id, void*, void*);
typedef void (*map_put_all_t)(id, id);
typedef void* (*map_remove_t)(id, void*);
typedef size_t (*map_size_t)(id);
typedef collection (*map_values_t)(id);
// define prototype
#define map_prototype   object_prototype;\
                        comparator comparator;\
                        hasher hasher;\
                        map_clear_t clear;\
                        map_contains_key_t contains_key;\
                        map_contains_value_t contains_value;\
                        map_entry_set_t entry_set;\
                        map_get_t get;\
                        map_is_empty_t is_empty;\
                        map_key_set_t key_set;\
                        map_put_t put;\
                        map_put_all_t put_all;\
                        map_remove_t remove;\
                        map_size_t size;\
                        map_values_t values        
END_DEFINE_CLASS(map)
#endif	/* MAP_H */

