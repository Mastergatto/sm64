#include "config.h"

// 0x0C000104
const GeoLayout penguin_geo[] = {
#if defined(VERSION_EU) || defined(VERSION_SH)
       GEO_SHADOW(SHADOW_CIRCLE_9_VERTS, 0x96, 60),
#else
       GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
#endif
       GEO_OPEN_NODE(),
          GEO_SCALE(0x00, 16384),
          GEO_OPEN_NODE(),
             GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 40, penguin_seg5_dl_05007540),
             GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, -51, 84, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_05007198),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 51, 84, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_050071E8),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, -38, -54, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_05007238),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 38, -54, -13, NULL),
                GEO_OPEN_NODE(),
                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_050072C8),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 111, -19, NULL),
                GEO_OPEN_NODE(),
                   GEO_SWITCH_CASE(5, geo_switch_tuxie_mother_eyes),
                   GEO_OPEN_NODE(),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_05006428),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_05006458),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_05006488),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_050064B8),
                      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, penguin_seg5_dl_050064E8), // unused, seen in Shoshinkai 1995 footage
                   GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
             GEO_CLOSE_NODE(),
          GEO_CLOSE_NODE(),
       GEO_CLOSE_NODE(),
       GEO_END(),
};
