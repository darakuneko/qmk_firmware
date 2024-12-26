/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0A, k0B, k0K, k0L, k0M, k1A, k1B, k1K, k1L, k1M, k2A, k2B, k2K, k2L, k3A, k3J, k0C, k0D, k0E, k0F, k1C, k1D, k1E, k1F, k2C, k2D, k2E, k2F, k3B, k3C, k3D, k0G, k0H, k0I, k0J, k1G, k1H, k1I, k1J, k2G, k2H, k2I, k2J, k3G, k3H, k3I \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M}, \
	{k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, XXX}, \
	{k3A, k3B, k3C, k3D, XXX, XXX, k3G, k3H, k3I, k3J, XXX, XXX, XXX} \
}
