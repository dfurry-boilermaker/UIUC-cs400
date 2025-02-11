/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)

    class HSLAPixel {
    public:
      double h; // Hue (degrees)
      double s; // Saturation (0.0 to 1.0)
      double l; // Luminance (0.0 to 1.0)
      double a; // Alpha (transparency) (0.0 to 1.0)

    // Constructor with default values
    HSLAPixel(double hue = 0.0, double saturation = 0.0, double luminance = 0.0, double alpha = 1.0)
      : h(hue), s(saturation), l(luminance), a(alpha) {}
  };
}
