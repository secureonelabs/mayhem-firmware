/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

// This file was generated by make_bitmap.py

#ifndef __BITMAP_HPP__
#define __BITMAP_HPP__

#include "ui.hpp"

namespace ui {

static constexpr uint8_t bitmap_icon_bht_data[] = {
	0x00, 0x00, 
	0xE0, 0x07, 
	0xF8, 0x08, 
	0x9C, 0x07, 
	0x0C, 0x00, 
	0x8E, 0x0A, 
	0x46, 0x12, 
	0x26, 0x22, 
	0x06, 0x02, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_bht {
	{ 16, 16 }, bitmap_icon_bht_data
};

static constexpr uint8_t bitmap_icon_sd_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0x98, 0x18, 
	0xE8, 0x16, 
	0xC8, 0x16, 
	0x98, 0x16, 
	0xB8, 0x16, 
	0xC8, 0x18, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_sd {
	{ 16, 16 }, bitmap_icon_sd_data
};

static constexpr uint8_t bitmap_sd_card_error_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0xC8, 0x13, 
	0x98, 0x19, 
	0x38, 0x1C, 
	0x78, 0x1E, 
	0x38, 0x1C, 
	0x98, 0x19, 
	0xC8, 0x13, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_error {
	{ 16, 16 }, bitmap_sd_card_error_data
};

static constexpr uint8_t bitmap_icon_unistroke_data[] = {
	0x33, 0xC0, 
	0x33, 0x00, 
	0xB3, 0xCD, 
	0xB3, 0xDF, 
	0xB3, 0xD9, 
	0xB3, 0xD9, 
	0x9E, 0xD9, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x0C, 0x1C, 
	0x06, 0x3E, 
	0x06, 0x67, 
	0xCE, 0x43, 
	0xFC, 0x01, 
	0x78, 0x40, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_unistroke {
	{ 16, 16 }, bitmap_icon_unistroke_data
};

static constexpr uint8_t bitmap_stripes_data[] = {
	0xFF, 0x03, 0xC0, 
	0xFF, 0x01, 0xE0, 
	0xFF, 0x00, 0xF0, 
	0x7F, 0x00, 0xF8, 
	0x3F, 0x00, 0xFC, 
	0x1F, 0x00, 0xFE, 
	0x0F, 0x00, 0xFF, 
	0x07, 0x80, 0xFF, 
	};
static constexpr Bitmap bitmap_stripes {
	{ 24, 8 }, bitmap_stripes_data
};

static constexpr uint8_t bitmap_icon_adsb_data[] = {
	0x80, 0x01, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE8, 0x17, 
	0xFA, 0x5F, 
	0xFE, 0x7F, 
	0xFF, 0xFF, 
	0xC7, 0xE3, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0x38, 0x1C, 
};
static constexpr Bitmap bitmap_icon_adsb {
	{ 16, 16 }, bitmap_icon_adsb_data
};

static constexpr uint8_t bitmap_sd_card_unknown_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0x38, 0x1C, 
	0x98, 0x19, 
	0xF8, 0x1C, 
	0x78, 0x1E, 
	0x78, 0x1E, 
	0xF8, 0x1F, 
	0x78, 0x1E, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_unknown {
	{ 16, 16 }, bitmap_sd_card_unknown_data
};

static constexpr uint8_t bitmap_play_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x0C, 0x00, 
	0x3C, 0x00, 
	0xFC, 0x00, 
	0xFC, 0x03, 
	0xFC, 0x0F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x0F, 
	0xFC, 0x03, 
	0xFC, 0x00, 
	0x3C, 0x00, 
	0x0C, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_play {
	{ 16, 16 }, bitmap_play_data
};

static constexpr uint8_t bitmap_icon_stealth_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x30, 0x1C, 
	0xFC, 0x3F, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0xC6, 0x63, 
	0x86, 0x61, 
	0xCE, 0x73, 
	0xFC, 0x3F, 
	0x7C, 0x3E, 
	0x38, 0x1C, 
	0x08, 0x00, 
	0x08, 0x00, 
	0x08, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_stealth {
	{ 16, 16 }, bitmap_icon_stealth_data
};

static constexpr uint8_t bitmap_icon_sleep_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x04, 
	0x00, 0x08, 
	0x00, 0x18, 
	0x00, 0x18, 
	0x00, 0x38, 
	0x00, 0x3C, 
	0x00, 0x3C, 
	0x00, 0x3E, 
	0x84, 0x1F, 
	0xF8, 0x1F, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_sleep {
	{ 16, 16 }, bitmap_icon_sleep_data
};

static constexpr uint8_t bitmap_icon_speaker_data[] = {
	0x00, 0x00, 
	0x00, 0x20, 
	0x00, 0x30, 
	0x00, 0x38, 
	0x00, 0x3C, 
	0xDC, 0x3E, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3E, 
	0x00, 0x3C, 
	0x00, 0x38, 
	0x00, 0x30, 
	0x00, 0x20, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_speaker {
	{ 16, 16 }, bitmap_icon_speaker_data
};

static constexpr uint8_t bitmap_icon_playdead_data[] = {
	0x80, 0x01, 
	0x80, 0x01, 
	0xE0, 0x07, 
	0xE0, 0x07, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0xE0, 0x07, 
	0xB0, 0x0A, 
	0x50, 0x0D, 
	0xA8, 0x1A, 
	0x58, 0x15, 
	0xAC, 0x2A, 
	0x54, 0x35, 
	0x04, 0x20, 
	0xF8, 0x1F, 
};
static constexpr Bitmap bitmap_icon_playdead {
	{ 16, 16 }, bitmap_icon_playdead_data
};

static constexpr uint8_t bitmap_icon_fox_data[] = {
	0x18, 0x18, 
	0x28, 0x14, 
	0x68, 0x16, 
	0x68, 0x16, 
	0xC8, 0x13, 
	0x88, 0x11, 
	0x04, 0x20, 
	0x24, 0x24, 
	0x22, 0x44, 
	0x01, 0x80, 
	0x06, 0x60, 
	0x98, 0x19, 
	0x20, 0x04, 
	0x40, 0x02, 
	0x80, 0x01, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_fox {
	{ 16, 16 }, bitmap_icon_fox_data
};

static constexpr uint8_t bitmap_record_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x03, 
	0xF0, 0x0F, 
	0xF8, 0x1F, 
	0x18, 0x1C, 
	0x9C, 0x39, 
	0x9C, 0x39, 
	0x1C, 0x3C, 
	0x9C, 0x3C, 
	0x98, 0x19, 
	0xF8, 0x1F, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_record {
	{ 16, 16 }, bitmap_record_data
};

static constexpr uint8_t bitmap_icon_ais_data[] = {
	0x00, 0x01, 
	0x80, 0x01, 
	0xC0, 0x0D, 
	0xC0, 0x3D, 
	0xE0, 0x3D, 
	0xF0, 0x7D, 
	0xF8, 0x7D, 
	0xF8, 0x7D, 
	0xFC, 0x7D, 
	0xFE, 0x7D, 
	0x00, 0x00, 
	0xF8, 0x3F, 
	0xF8, 0x1F, 
	0xFB, 0xCF, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_ais {
	{ 16, 16 }, bitmap_icon_ais_data
};

static constexpr uint8_t bitmap_icon_nuoptix_data[] = {
	0x80, 0x01, 
	0x80, 0x01, 
	0x40, 0x02, 
	0x40, 0x1A, 
	0x40, 0x1A, 
	0x20, 0x0C, 
	0x20, 0x0F, 
	0x20, 0x1E, 
	0x10, 0x0E, 
	0x10, 0x0B, 
	0x10, 0x0B, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
};
static constexpr Bitmap bitmap_icon_nuoptix {
	{ 16, 16 }, bitmap_icon_nuoptix_data
};

static constexpr uint8_t bitmap_icon_closecall_data[] = {
	0x00, 0x00, 
	0x00, 0x10, 
	0x00, 0x38, 
	0x00, 0x7C, 
	0x00, 0x00, 
	0x3E, 0x00, 
	0xE3, 0x00, 
	0x80, 0x01, 
	0x1C, 0x03, 
	0x22, 0x02, 
	0x41, 0x06, 
	0x88, 0x04, 
	0x9C, 0x04, 
	0x88, 0x04, 
	0x41, 0x06, 
	0x22, 0x02, 
};
static constexpr Bitmap bitmap_icon_closecall {
	{ 16, 16 }, bitmap_icon_closecall_data
};

static constexpr uint8_t bitmap_icon_script_data[] = {
	0xFC, 0x07, 
	0xFA, 0x0F, 
	0x19, 0x1A, 
	0xF9, 0x1F, 
	0x1E, 0x1D, 
	0xF8, 0x1F, 
	0x98, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x08, 0x14, 
	0xF8, 0x1F, 
	0x48, 0x1E, 
	0xF8, 0xFF, 
	0x78, 0x80, 
	0x30, 0x40, 
	0xE0, 0x3F, 
};
static constexpr Bitmap bitmap_icon_script {
	{ 16, 16 }, bitmap_icon_script_data
};

static constexpr uint8_t bitmap_icon_pocsag_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xFC, 0x3F, 
	0xFE, 0x7F, 
	0x02, 0x40, 
	0xBA, 0x45, 
	0x02, 0x40, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0x92, 0x7C, 
	0x92, 0x7C, 
	0xFC, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_pocsag {
	{ 16, 16 }, bitmap_icon_pocsag_data
};

static constexpr uint8_t bitmap_icon_lcr_data[] = {
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9B, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9D, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
};
static constexpr Bitmap bitmap_icon_lcr {
	{ 16, 16 }, bitmap_icon_lcr_data
};

static constexpr uint8_t bitmap_more_data[] = {
	0x18, 
	0x18, 
	0x18, 
	0x18, 
	0xFF, 
	0x7E, 
	0x3C, 
	0x18, 
};
static constexpr Bitmap bitmap_more {
	{ 8, 8 }, bitmap_more_data
};

static constexpr uint8_t bitmap_icon_whistle_data[] = {
	0x00, 0x00, 
	0x60, 0x00, 
	0xFC, 0x01, 
	0xFF, 0x03, 
	0xFF, 0x0F, 
	0xF9, 0x11, 
	0x66, 0x30, 
	0x88, 0x3C, 
	0x10, 0x7F, 
	0x10, 0x7E, 
	0x08, 0x7C, 
	0x08, 0x7C, 
	0x10, 0x3C, 
	0x20, 0x0E, 
	0xC0, 0x03, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_whistle {
	{ 16, 16 }, bitmap_icon_whistle_data
};

static constexpr uint8_t bitmap_sd_card_ok_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x98, 0x15, 
	0x68, 0x19, 
	0x68, 0x1D, 
	0x68, 0x19, 
	0x98, 0x15, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_ok {
	{ 16, 16 }, bitmap_sd_card_ok_data
};

static constexpr uint8_t bitmap_icon_microphone_data[] = {
	0xC0, 0x03, 
	0xA0, 0x06, 
	0x60, 0x05, 
	0xE0, 0x07, 
	0xEC, 0x37, 
	0xEC, 0x37, 
	0xE8, 0x17, 
	0xE8, 0x17, 
	0xE8, 0x17, 
	0xC8, 0x13, 
	0x18, 0x18, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
	0x80, 0x01, 
	0x80, 0x01, 
	0xC0, 0x03, 
};
static constexpr Bitmap bitmap_icon_microphone {
	{ 16, 16 }, bitmap_icon_microphone_data
};

static constexpr uint8_t bitmap_icon_numbers_data[] = {
	0x00, 0x00, 
	0x68, 0x1B, 
	0x48, 0x09, 
	0x48, 0x1A, 
	0x48, 0x5B, 
	0x08, 0x00, 
	0x14, 0x00, 
	0x1C, 0x00, 
	0x14, 0x00, 
	0x14, 0x00, 
	0x1C, 0x00, 
	0x14, 0x00, 
	0x22, 0x00, 
	0x3E, 0x00, 
	0x22, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_numbers {
	{ 16, 16 }, bitmap_icon_numbers_data
};

static constexpr uint8_t bitmap_icon_setup_data[] = {
	0x00, 0x00, 
	0x18, 0x18, 
	0x18, 0x7E, 
	0x18, 0x7E, 
	0x18, 0x7E, 
	0x18, 0x42, 
	0x18, 0x42, 
	0x18, 0x42, 
	0x18, 0x18, 
	0x7E, 0x18, 
	0x7E, 0x18, 
	0x7E, 0x18, 
	0x42, 0x18, 
	0x42, 0x18, 
	0x42, 0x18, 
	0x18, 0x18, 
};
static constexpr Bitmap bitmap_icon_setup {
	{ 16, 16 }, bitmap_icon_setup_data
};

static constexpr uint8_t bitmap_icon_rds_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x3C, 0x3C, 
	0x7E, 0x7E, 
	0x67, 0xE7, 
	0x83, 0xC3, 
	0xC7, 0xE1, 
	0xFD, 0xBC, 
	0x42, 0x42, 
	0x3C, 0x3C, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_rds {
	{ 16, 16 }, bitmap_icon_rds_data
};

static constexpr uint8_t bitmap_icon_nordic_data[] = {
	0x00, 0x00, 
	0x18, 0x18, 
	0x26, 0x6C, 
	0xC1, 0x8E, 
	0x07, 0x8F, 
	0x1F, 0x8C, 
	0x3F, 0x80, 
	0xFF, 0x80, 
	0xFF, 0x83, 
	0xFF, 0x87, 
	0xEF, 0x9F, 
	0x8F, 0xFF, 
	0x4F, 0xFF, 
	0x2E, 0x7C, 
	0x18, 0x18, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_nordic {
	{ 16, 16 }, bitmap_icon_nordic_data
};

static constexpr uint8_t bitmap_icon_previous_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xE0, 0x03, 
	0x10, 0x03, 
	0x88, 0x01, 
	0xC4, 0x00, 
	0xE2, 0x3F, 
	0x01, 0x20, 
	0x01, 0x20, 
	0xE3, 0x3F, 
	0xC6, 0x3F, 
	0x8C, 0x00, 
	0x18, 0x01, 
	0xF0, 0x03, 
	0xE0, 0x03, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_previous {
	{ 16, 16 }, bitmap_icon_previous_data
};

static constexpr uint8_t bitmap_icon_cwgen_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0xC0, 
	0x20, 0x21, 
	0x20, 0x21, 
	0x21, 0x21, 
	0x21, 0x21, 
	0x21, 0x21, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x0C, 0x0C, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_cwgen {
	{ 16, 16 }, bitmap_icon_cwgen_data
};

static constexpr uint8_t bitmap_icon_receivers_data[] = {
	0xC0, 0x07, 
	0x30, 0x18, 
	0x10, 0x10, 
	0x88, 0x23, 
	0x48, 0x24, 
	0x40, 0x24, 
	0x80, 0x10, 
	0x80, 0x10, 
	0xC0, 0x08, 
	0xE0, 0x08, 
	0x60, 0x04, 
	0x08, 0x04, 
	0x08, 0x02, 
	0x10, 0x01, 
	0xE0, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_receivers {
	{ 16, 16 }, bitmap_icon_receivers_data
};

static constexpr uint8_t bitmap_icon_codetx_data[] = {
	0x00, 0x00, 
	0xF0, 0x07, 
	0x0C, 0x18, 
	0x03, 0x60, 
	0xE0, 0x03, 
	0x18, 0x0C, 
	0x04, 0x10, 
	0xC0, 0x01, 
	0x20, 0x02, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xBB, 0x6D, 
	0x2A, 0x49, 
	0x2A, 0x49, 
	0x3A, 0x49, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_codetx {
	{ 16, 16 }, bitmap_icon_codetx_data
};

static constexpr uint8_t bitmap_stop_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_stop {
	{ 16, 16 }, bitmap_stop_data
};

static constexpr uint8_t bitmap_rssipwm_data[] = {
	0x00, 0x00, 0x00, 
	0x8F, 0xE7, 0x7D, 
	0x51, 0x10, 0x10, 
	0x51, 0x10, 0x10, 
	0x8F, 0xE3, 0x10, 
	0x09, 0x04, 0x11, 
	0x11, 0x04, 0x11, 
	0xD1, 0xF3, 0x7C, 
	0x00, 0x00, 0x00, 
	0x3F, 0x1E, 0x1E, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0xE1, 0xF3, 0x73, 
	};
static constexpr Bitmap bitmap_rssipwm {
	{ 24, 16 }, bitmap_rssipwm_data
};

static constexpr uint8_t bitmap_target_calibrate_data[] = {
	0x02, 0x00, 0x00, 0x40, 
	0x07, 0x00, 0x00, 0xE0, 
	0x0E, 0x00, 0x00, 0x70, 
	0x1C, 0x00, 0x00, 0x38, 
	0x38, 0x00, 0x00, 0x1C, 
	0x70, 0x00, 0x00, 0x0E, 
	0xE0, 0x00, 0x00, 0x07, 
	0xC0, 0x01, 0x80, 0x03, 
	0x80, 0x03, 0xC0, 0x01, 
	0x00, 0x07, 0xE0, 0x00, 
	0x00, 0x0E, 0x70, 0x00, 
	0x00, 0x1C, 0x38, 0x00, 
	0x00, 0x38, 0x1C, 0x00, 
	0x00, 0x70, 0x0E, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0xC0, 0x03, 0x00, 
	0x00, 0xC0, 0x03, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0x70, 0x0E, 0x00, 
	0x00, 0x38, 0x1C, 0x00, 
	0x00, 0x1C, 0x38, 0x00, 
	0x00, 0x0E, 0x70, 0x00, 
	0x00, 0x07, 0xE0, 0x00, 
	0x80, 0x03, 0xC0, 0x01, 
	0xC0, 0x01, 0x80, 0x03, 
	0xE0, 0x00, 0x00, 0x07, 
	0x70, 0x00, 0x00, 0x0E, 
	0x38, 0x00, 0x00, 0x1C, 
	0x1C, 0x00, 0x00, 0x38, 
	0x0E, 0x00, 0x00, 0x70, 
	0x07, 0x00, 0x00, 0xE0, 
	0x02, 0x00, 0x00, 0x40, 
};
static constexpr Bitmap bitmap_target_calibrate {
	{ 32, 32 }, bitmap_target_calibrate_data
};

static constexpr uint8_t bitmap_icon_tpms_data[] = {
	0xE0, 0x07, 
	0xF8, 0x1A, 
	0x78, 0x10, 
	0x3C, 0x20, 
	0x34, 0x27, 
	0x9A, 0x4C, 
	0x96, 0x6C, 
	0xBA, 0x4C, 
	0x96, 0x6C, 
	0xB2, 0x4C, 
	0x92, 0x4E, 
	0x24, 0x27, 
	0x24, 0x20, 
	0x48, 0x10, 
	0xD8, 0x1A, 
	0xE0, 0x07, 
};
static constexpr Bitmap bitmap_icon_tpms {
	{ 16, 16 }, bitmap_icon_tpms_data
};

static constexpr uint8_t bitmap_icon_hackrf_data[] = {
	0x80, 0x00, 
	0xC0, 0x01, 
	0xE0, 0x03, 
	0x80, 0x00, 
	0x80, 0x0E, 
	0x90, 0x0E, 
	0xB8, 0x0E, 
	0x90, 0x04, 
	0x90, 0x02, 
	0xA0, 0x01, 
	0xC0, 0x00, 
	0x80, 0x00, 
	0xC0, 0x01, 
	0xE0, 0x03, 
	0xE0, 0x03, 
	0xC0, 0x01, 
};
static constexpr Bitmap bitmap_icon_hackrf {
	{ 16, 16 }, bitmap_icon_hackrf_data
};

static constexpr uint8_t bitmap_icon_remote_data[] = {
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0xF0, 0x03, 
	0x10, 0x04, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0x30, 0x0C, 
	0xF0, 0x0F, 
	0xE0, 0x07, 
};
static constexpr Bitmap bitmap_icon_remote {
	{ 16, 16 }, bitmap_icon_remote_data
};

static constexpr uint8_t bitmap_icon_camera_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xCC, 0x03, 
	0xE8, 0x07, 
	0xFC, 0x3F, 
	0x3C, 0x3C, 
	0x9C, 0x39, 
	0xDC, 0x3B, 
	0xDC, 0x3B, 
	0x9C, 0x39, 
	0x3C, 0x3C, 
	0xFC, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_camera {
	{ 16, 16 }, bitmap_icon_camera_data
};

static constexpr uint8_t bitmap_icon_ert_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x77, 0x77, 
	0x55, 0x41, 
	0x75, 0x77, 
	0x55, 0x44, 
	0x55, 0x44, 
	0x77, 0x77, 
	0x00, 0x00, 
	0x20, 0x04, 
	0x02, 0x26, 
	0x04, 0x12, 
	0x00, 0x03, 
	0x80, 0x01, 
	0xC3, 0x61, 
	0x80, 0x00, 
};
static constexpr Bitmap bitmap_icon_ert {
	{ 16, 16 }, bitmap_icon_ert_data
};

static constexpr uint8_t bitmap_icon_keyboard_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xF0, 0x1F, 
	0x18, 0x11, 
	0x18, 0x11, 
	0x18, 0x11, 
	0xFC, 0x7F, 
	0x46, 0x44, 
	0x46, 0x44, 
	0x46, 0x44, 
	0xFE, 0x7F, 
	0xFE, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_keyboard {
	{ 16, 16 }, bitmap_icon_keyboard_data
};

static constexpr uint8_t bitmap_icon_utilities_data[] = {
	0xC0, 0x03, 
	0x80, 0x0F, 
	0x00, 0x1F, 
	0x08, 0x1E, 
	0x18, 0x3E, 
	0x3C, 0x3E, 
	0x3C, 0x39, 
	0x98, 0x3A, 
	0x48, 0x1D, 
	0xA0, 0x1E, 
	0x70, 0x0F, 
	0xF8, 0x07, 
	0xE0, 0x07, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
};
static constexpr Bitmap bitmap_icon_utilities {
	{ 16, 16 }, bitmap_icon_utilities_data
};

static constexpr uint8_t bitmap_icon_capture_data[] = {
	0xEF, 0x29, 
	0xEF, 0x69, 
	0xEF, 0xE9, 
	0xEF, 0xE9, 
	0xEF, 0xEF, 
	0x1F, 0xF0, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0x03, 0xC0, 
	0xFB, 0xDF, 
	0x0B, 0xD9, 
	0xFB, 0xDF, 
	0x4B, 0xDE, 
	0xFB, 0xDF, 
	0x03, 0xC0, 
	0xFE, 0x7F, 
};
static constexpr Bitmap bitmap_icon_capture {
	{ 16, 16 }, bitmap_icon_capture_data
};

static constexpr uint8_t bitmap_icon_morse_data[] = {
	0x00, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x1F, 
	0x06, 0x1F, 
	0x06, 0x00, 
	0x66, 0xC0, 
	0x66, 0xC0, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_morse {
	{ 16, 16 }, bitmap_icon_morse_data
};

static constexpr uint8_t bitmap_icon_replay_data[] = {
	0x00, 0x00, 
	0xC0, 0x07, 
	0xF0, 0x1F, 
	0x79, 0x3C, 
	0x1D, 0x70, 
	0x0F, 0x60, 
	0x07, 0xE0, 
	0x1F, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xE0, 
	0x00, 0x60, 
	0x00, 0x70, 
	0x30, 0x3C, 
	0xE0, 0x0F, 
	0x80, 0x03, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_replay {
	{ 16, 16 }, bitmap_icon_replay_data
};

static constexpr uint8_t bitmap_icon_soundboard_data[] = {
	0x00, 0x00, 
	0xFF, 0xFF, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDF, 0xFB, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDF, 0xFB, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xFF, 0xFF, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_soundboard {
	{ 16, 16 }, bitmap_icon_soundboard_data
};

static constexpr uint8_t bitmap_target_verify_data[] = {
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0xFC, 0x3F, 0x00, 
	0x00, 0x1F, 0xF8, 0x00, 
	0xC0, 0x03, 0xC0, 0x03, 
	0xE0, 0x00, 0x00, 0x07, 
	0x70, 0x00, 0x00, 0x0E, 
	0x38, 0x00, 0x00, 0x1C, 
	0x18, 0x00, 0x00, 0x18, 
	0x0C, 0x00, 0x00, 0x30, 
	0x0C, 0x00, 0x00, 0x30, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0xE0, 0x07, 0xC0, 
	0x03, 0xE0, 0x07, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x0C, 0x00, 0x00, 0x30, 
	0x0C, 0x00, 0x00, 0x30, 
	0x18, 0x00, 0x00, 0x18, 
	0x38, 0x00, 0x00, 0x1C, 
	0x70, 0x00, 0x00, 0x0E, 
	0xE0, 0x00, 0x00, 0x07, 
	0xC0, 0x03, 0xC0, 0x03, 
	0x00, 0x1F, 0xF8, 0x00, 
	0x00, 0xFC, 0x3F, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
};
static constexpr Bitmap bitmap_target_verify {
	{ 32, 32 }, bitmap_target_verify_data
};

static constexpr uint8_t bitmap_icon_audiotx_data[] = {
	0x00, 0x70, 
	0x00, 0x7F, 
	0xC0, 0x4F, 
	0xC0, 0x60, 
	0x40, 0x5E, 
	0xC0, 0x41, 
	0x40, 0x40, 
	0x40, 0x40, 
	0x40, 0x40, 
	0x40, 0x70, 
	0x70, 0x7C, 
	0x7C, 0x7E, 
	0x7E, 0x3E, 
	0x3E, 0x1C, 
	0x1C, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_audiotx {
	{ 16, 16 }, bitmap_icon_audiotx_data
};

static constexpr uint8_t bitmap_icon_sstv_data[] = {
	0x10, 0x08, 
	0x20, 0x04, 
	0x40, 0x02, 
	0x80, 0x01, 
	0xFF, 0xFF, 
	0x03, 0xF8, 
	0x5D, 0xF0, 
	0x05, 0xD0, 
	0x01, 0xF0, 
	0x01, 0xD0, 
	0x01, 0xF0, 
	0x01, 0xD0, 
	0x01, 0xF0, 
	0x01, 0x90, 
	0x03, 0x98, 
	0xFF, 0xFF, 
};
static constexpr Bitmap bitmap_icon_sstv {
	{ 16, 16 }, bitmap_icon_sstv_data
};

static constexpr uint8_t bitmap_icon_jammer_data[] = {
	0xA6, 0x2C, 
	0x73, 0x47, 
	0x2E, 0xB9, 
	0x55, 0xD7, 
	0x7E, 0xAE, 
	0xD3, 0x45, 
	0xCA, 0xBA, 
	0x71, 0x15, 
	0xDA, 0xBE, 
	0xF5, 0xAB, 
	0xAD, 0x98, 
	0x48, 0x77, 
	0xAD, 0xCA, 
	0x58, 0x7D, 
	0xBF, 0xAF, 
	0x5A, 0x65, 
};
static constexpr Bitmap bitmap_icon_jammer {
	{ 16, 16 }, bitmap_icon_jammer_data
};


} /* namespace ui */

#endif/*__BITMAP_HPP__*/
