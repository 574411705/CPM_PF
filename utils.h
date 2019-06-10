/*  Name:
 *      utils.h
 *
 *  Description:
 *      Miscellaneous utilities for convenience
 */

#pragma once
#ifndef UTILS_H
#define UTILS_H
#include "CPM/CPM.h"
#include "CPM/OpticFlowIO.h"
#include "PFilter/PermeabilityFilter.h"
extern "C" {
#include "Variational_refinement/variational.h"
}

/* ---------------- CONVERSION BETWEEN IMAGE TYPES --------------------------- */
void Match2Flow(FImage& inMat, FImage& ou, FImage& ov, int w, int h);

void Match2Mat2f(FImage matches, Mat2f &flow);

void WriteMatches(const char *filename, FImage& inMat);

void FImage2image_t(FImage mu, image_t* flow_x);

void Mat2f2image_t_uv(Mat2f flow, image_t* flow_x, image_t* flow_y);

void image_t_uv2Mat2f(Mat2f &flow, image_t* flow_x, image_t* flow_y);

void Mat3f2FImage(Mat3f in, FImage &out);

void Mat3f2color_image_t(Mat3f in, color_image_t *out);

void image_t2Mat(image_t* in, Mat &out);

/* ---------------- OPERATIONS ON STRING FOR FILE NAMING --------------------------- */
bool str_replace(std::string& str, const std::string& from, const std::string& to);



#endif //!UTILS_H