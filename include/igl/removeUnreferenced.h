// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
//
//  removeUnreferenced.h
//  Preview3D
//
//  Created by Daniele Panozzo on 17/11/11.

#ifndef IGL_REMOVEUNREFERENCED_H
#define IGL_REMOVEUNREFERENCED_H
#include "igl_inline.h"

#include <Eigen/Core>
namespace igl 
{
  // [ NV, NF ] = removeUnreferenced( V,F,epsilon )
  // Remove unreferenced vertices from V, updating F accordingly
  //
  // Input:
  // V,F: mesh description
  //
  // Output:
  // NV, NF: new mesh without unreferenced vertices
  //
  // Known bugs:
  //   Also removes combinatorially degenerate faces in NF
  template <typename T, typename S>
  IGL_INLINE void removeUnreferenced(
    const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &V,
    const Eigen::Matrix<S, Eigen::Dynamic, Eigen::Dynamic> &F,
    Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> &NV,
    Eigen::Matrix<S, Eigen::Dynamic, Eigen::Dynamic> &NF,
    Eigen::Matrix<S, Eigen::Dynamic, 1> &I);
  
}

#ifdef IGL_HEADER_ONLY
#  include "removeUnreferenced.cpp"
#endif

#endif
