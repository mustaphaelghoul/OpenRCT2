/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../RideData.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor HauntedHouseRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_GENTLE),
    SET_FIELD(EnabledTrackPieces, 0),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(StartTrackPiece, FLAT_TRACK_ELEM_3_X_3),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_haunted_house),
    SET_FIELD(Flags, RIDE_TYPE_FLAG_HAS_SINGLE_PIECE_STATION | RIDE_TYPE_FLAG_CANNOT_HAVE_GAPS | RIDE_TYPE_FLAG_HAS_LOAD_OPTIONS |
                     RIDE_TYPE_FLAG_HAS_NO_TRACK | RIDE_TYPE_FLAG_VEHICLE_IS_INTEGRAL | RIDE_TYPE_FLAG_TRACK_NO_WALLS | RIDE_TYPE_FLAG_FLAT_RIDE |
                     RIDE_TYPE_FLAG_IN_RIDE | RIDE_TYPE_FLAG_ALLOW_MUSIC | RIDE_TYPE_FLAG_HAS_ENTRANCE_EXIT | RIDE_TYPE_FLAG_SINGLE_SESSION | 
                     RIDE_TYPE_FLAG_LIST_VEHICLES_SEPARATELY),
    SET_FIELD(NameConvention, { RIDE_COMPONENT_TYPE_BUILDING, RIDE_COMPONENT_TYPE_STRUCTURE, RIDE_COMPONENT_TYPE_STATION }),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_SAFETY_CUT_OUT)),
    SET_FIELD(LiftData, { SoundId::Null, 5, 5 }),
};
// clang-format on
