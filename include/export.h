/**
 * @file export.h
 * @author Lukeman Hakkim Sheik Alavudeen
 * @date 18 Apr 2020, Last Updated 17 2020
 * @brief This file contains all support functions to export text and xml file for the strategic airlift simulator
 */



#include "data_types.h"
#include <stdio.h>


/**
 * @brief generate the output text file for the strategic airlift simulator..
 *
 * @para, my_paths It represents the shortest path between two locations.
 * @param, output_file The path for the generated text file 
 * @return The value 0 to represent successfully generating the text file
*/

int export_text(struct PATH *my_path, char *output_file);


/**
 * @brief generate the output xml file for the strategic airlift simulator..
 *
 * @para, my_paths It represents the shortest path between two locations.
 * @param, output_file The path for the generated xml file 
 * @return The value 0 to represent successfully generating the xml file
*/

int export_xml(struct PATH *my_paths, char *output_file);



/**
 * @brief To generate port data in output xml file for the strategic airlift simulator..
 *
 * @para, fb The xml file where the port data will be written. 
 * @return The value 0 to represent successfully generating the text file
*/
int create_port_data(FILE *fb);



/**
 * @brief To generate component data in output xml file for the strategic airlift simulator..
 *
 * @para, fb The xml file where the port data will be written. 
 * @para, my_state It represents the current state of the generator.
 * @para, air_count It represents the airport count in the airport_list
 * @return The value 0 to represent successfully generating the text file
*/
int create_component_data(FILE *fb, struct STATE *my_state, int air_count);


/**
 * @brief To generate connection eic data in output xml file for the strategic airlift simulator..
 *
 * @para, fb The xml file where the port data will be written. 
 * @para, my_state It represents the current state of the generator.
 * @para, air_count It represents the airport count in the airport_list
 * @return The value 0 to represent successfully generating the text file
*/
int create_connection_eic_data(FILE *fb, struct STATE *my_state, int air_count);



/**
 * @brief To generate connection eic data in output xml file for the strategic airlift simulator..
 *
 * @para, fb The xml file where the port data will be written. 
 * @para, my_state It represents the current state of the generator.
 * @para, air_count It represents the airport count in the airport_list
 * @return The value 0 to represent successfully generating the text file
*/
int create_connection_eoc_data(FILE *fb, struct STATE *my_state, int air_count);
