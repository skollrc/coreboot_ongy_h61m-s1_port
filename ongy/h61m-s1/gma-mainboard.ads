-- SPDX-License-Identifier: GPL-2.0-or-later
-- This file is part of the coreboot project.

with HW.GFX.GMA;
with HW.GFX.GMA.Display_Probing;

use HW.GFX.GMA;
use HW.GFX.GMA.Display_Probing;

private package GMA.Mainboard is

   -- FIXME: check this
   ports : constant Port_List :=
     (DP1,
      DP2,
      DP3,
      HDMI1,
      HDMI2,
      HDMI3,
      Analog,
      LVDS,
      eDP);

end GMA.Mainboard;