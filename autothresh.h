/*M///////////////////////////////////////////////////////////////////////////////////////
//
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//
// Copyright (C) 2016, Laboratory of computer vision and numerical systems (LVSN), Multipolar Infrared Vision team, University Laval, all rights reserved.
// @Authors
//    Julien FLEURET, julien.fleuret.1@ulaval.ca
//
// This is the code related to the paper : "A Real Time Animal Detection And Segmentation Algorithm For IRT Images In Indoor Environments".
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/


// N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E
// N O T E |                                                                                                                                                               | N O T E
// N O T E | The implementations and other codes contains in this file are deeply inspired by OpenCV's and OpenCP's libraries.                                             | N O T E
// N O T E |                                                                                                                                                               | N O T E
// N O T E | All or part of it might be a direct modification of an implementation of either OpenCV's or OpenCP's implementation for the purpose of an algorithm.          | N O T E
// N O T E |                                                                                                                                                               | N O T E
// N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E | N O T E



#ifndef AUTOTHRESH
#define AUTOTHRESH

#include <opencv2/core.hpp>

#ifdef _DEBUG
#include <iostream>
#endif

namespace autothresh
{

// This function process the Otsu's criterion and return the optimal threshold value.
//
// in : cv::Mat : one channel matrix : the supported type must be either signed or unsigned 8 bit per element integer or signed or unsigned 16 bits per elements integer.
//
// dtype : parameter to set to the flag representative the range scale of the input matrix in case wehere it's type higher than CV_16U.
// The parameter "dtype" will be ignored otherwise.
//
double otsu(cv::InputArray in,const int& dtype = -1);

// This function process the Triangle's criterion and return the optimal threshold value.
//
// in : cv::Mat : one channel matrix : the supported type must be either signed or unsigned 8 bit per element integer or signed or unsigned 16 bits per elements integer.
//
// dtype : parameter to set to the flag representative the range scale of the input matrix in case wehere it's type higher than CV_16U.
// The parameter "dtype" will be ignored otherwise.
//
double triangle(cv::InputArray in,const int& dtype = -1);

}

#endif // OTSU

