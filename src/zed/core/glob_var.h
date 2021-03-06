#ifndef GLOB_VAR_H
#define GLOB_VAR_H


#include "structs.h"

/** Constants **/

//constants
const int DefaultBlocks = 25; // max: 30
const float DefaultFPS = 30.f;
const int CameraResolution = 720;
// camera resolution:
// 		480 (640*480)
//		720 (1280*720)
//		1080 (1920*1080)
const int SensingMode = 1;
// sensing mode:
//		1 (FULL)
//	  2 (RAW)

const float ScaleRatio_w = 7.1f/5.f;
const float ScaleRatio_h = 9.5f/12.f;
const int Inf = 999;

/**
 * Rules of validity:
 * 		dist > maxSafeDistance: validity = 1
 * 		minSafeDistance < dist < maxSafeDistance: validity = 0
 * 		dist < minSafeDistance: validity = -1
 */

const int minCalibrationDist = 80; // min distance zed can analyze
const int minSafeDistance = minCalibrationDist + 30; // in cm
const int maxSafeDistance = minSafeDistance + 20;
const int MaxValidAreas = 20;
const int DroneSafeWidth = 80; // minimal width a drone can pass through
const int DroneSafeHeight = 50; // minimal height a drone can pass through

/** Global variables **/

// log flags
extern bool log_loopDuration;

extern int w;
extern int h;
extern int blks_w;
extern int blks_h;
extern int num_blks_w;
extern float aspect_ratio;
extern bool isMovingForward;
extern bool objDetected;
extern std::vector<std::string> cascade_files;


extern blk_grid_t **grid;
extern coord_t **r_grid;
extern area_t sens_area; //area of blocks for obstacle detection
extern area_t sens_area_pxl; //area for obstacle detection in pixel
extern area_t sens_area_pxl_moving; //area for obstacle detection in pixel while drone is moving forward
extern area_struct_t valid_classfied;
extern areas_t valid_areas;
extern areas_t invalid_areas;
extern areas_t danger_areas;
extern coord3d_t intend_pos;
extern coord3d_t target_pos;
extern log_t log_opt;


#endif