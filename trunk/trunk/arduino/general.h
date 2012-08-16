/*
 * general.h
 * 
 * Include file containing extra global call methods that cope for 
 * missing functionalities in the Arduino libraries.
 *
 * (c) 2008 Sofian Audry | info((@))sofianaudry((.))com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef GENERAL_INC
#define GENERAL_INC

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

float map(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#endif
