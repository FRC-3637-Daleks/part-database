/* 
 * File:   interface.h
 * Author: ben
 */

#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

std::string make_daytime_string()
{
  using namespace std;
  time_t now = time(0);
  return ctime(&now);
}