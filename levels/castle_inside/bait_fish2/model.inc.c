Lights1 bait_fish2_fish2_1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bait_fish2_fish2_2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bait_fish2_fish2_1_ci4_aligner[] = {gsSPEndDisplayList()};
u8 bait_fish2_fish2_1_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x23, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x42, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x50, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x41, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x42, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x44, 0x50, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x44, 0x21, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x44, 0x45, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x44, 0x44, 
	0x52, 0x12, 0x25, 0x55, 0x22, 0x11, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 0x44, 0x44, 
	0x25, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x15, 0x54, 0x44, 0x44, 0x44, 
	0x45, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x22, 0x44, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x24, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x25, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 
	0x24, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x22, 0x21, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x24, 
	0x44, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x44, 
	0x22, 0x10, 0x00, 0x00, 0x00, 0x05, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 
	0x44, 0x42, 0x10, 0x00, 0x03, 0x54, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x52, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x44, 
	0x44, 0x44, 0x42, 0x10, 0x15, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x24, 
	0x44, 0x44, 0x44, 0x25, 0x24, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 
	0x44, 0x44, 0x42, 0x54, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x54, 0x44, 0x25, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x22, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x05, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x42, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x14, 0x45, 0x52, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x24, 0x42, 0x55, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
	0x44, 0x45, 0x61, 0x54, 0x44, 0x44, 0x44, 0x52, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x42, 0x54, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 
	0x44, 0x41, 0x78, 0x15, 0x44, 0x44, 0x44, 0x42, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x55, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 
	0x44, 0x49, 0x77, 0x89, 0x54, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 
	0x44, 0x4a, 0x77, 0x77, 0x95, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x44, 
	0x44, 0x4a, 0x77, 0x77, 0xa5, 0x54, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x23, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 
	0x44, 0x43, 0x77, 0x77, 0x69, 0xb5, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x29, 0x5a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 
	0x44, 0x45, 0x67, 0x77, 0x77, 0x7b, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x23, 0x67, 0x5b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 
	0x44, 0x44, 0x37, 0x77, 0x77, 0x77, 0x62, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x21, 0xb7, 0x77, 0xb7, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x24, 0x44, 
	0x44, 0x44, 0x29, 0x77, 0x77, 0x77, 0x76, 0x14, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0xa7, 0x77, 0x77, 0x77, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x1b, 0x87, 0x77, 0x77, 0xb5, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x21, 0xa7, 0x77, 0x77, 0x77, 0x77, 
	0x00, 0x00, 0x00, 0x00, 0x32, 0x25, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0x29, 0xaa, 0xa9, 0x24, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x45, 0xa7, 0x77, 0x77, 0x77, 0x77, 0x77, 
	0x00, 0x00, 0x03, 0x22, 0x44, 0x45, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x23, 0xcc, 0xcc, 0xc1, 0x54, 0x44, 0x44, 
	0x44, 0x42, 0x29, 0xb6, 0x88, 0x88, 0x88, 0x6b, 
	0x00, 0x01, 0x24, 0x44, 0x44, 0x45, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x23, 0xde, 0xee, 0xee, 0xee, 0xec, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0x22, 0x22, 0x22, 0x22, 
	0x00, 0x02, 0x44, 0x22, 0x22, 0x22, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x1e, 0xee, 0xee, 0xee, 0xee, 0xee, 0xd1, 0x24, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x01, 0x00, 0x10, 0x00, 0x00, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0xce, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x12, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x5c, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xd1, 
	0xa9, 0x93, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x39, 0xbb, 
	0x6b, 0xcc, 0xcc, 0xde, 0xee, 0xee, 0xee, 0xe3, 
	0xff, 0xff, 0xf8, 0x6b, 0xa3, 0x44, 0x44, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x49, 0xb6, 0xff, 0xff, 
	0x69, 0xcc, 0xcc, 0x3c, 0xee, 0xee, 0xee, 0xe3, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x8b, 0xa3, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x44, 
	0x44, 0x44, 0x49, 0xa6, 0xff, 0xff, 0xff, 0xfb, 
	0xce, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xca, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x44, 
	0x44, 0x3b, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf3, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xec, 0xaf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 
	0x4a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xcc, 0xa6, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 
	0x9c, 0xdd, 0xdd, 0xcc, 0xca, 0x6f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xf8, 0xbb, 0xbb, 0x6f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x36, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x09, 0x6f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0a, 0x6f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x19, 0xbf, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xab, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 
	0xab, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x9a, 0xab, 0x66, 0x8f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x86, 0x6b, 0xaa, 0x99, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x50, 
	0x59, 0x05, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx bait_fish2_fish2_1_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bait_fish2_fish2_1_ci4_pal_rgba16[] = {
	0x01, 0xd6, 0x42, 0x11, 0x29, 0xd1, 0x52, 0x55, 
	0x2a, 0x13, 0x29, 0x8d, 0xd6, 0x6d, 0xff, 0xff, 
	0xe6, 0xf5, 0x6b, 0x5b, 0x84, 0x1f, 0xad, 0x67, 
	0x92, 0x5b, 0xca, 0xe3, 0xeb, 0x29, 0xff, 0xb1, 
	
};

Gfx bait_fish2_fish2_2_ci4_aligner[] = {gsSPEndDisplayList()};
u8 bait_fish2_fish2_2_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x24, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 
	0x44, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x12, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x54, 
	0x44, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 
	0x44, 0x44, 0x44, 0x45, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 
	0x44, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x45, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x54, 0x44, 
	0x44, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x56, 0x00, 0x00, 
	0x55, 0x21, 0x10, 0x00, 0x00, 0x05, 0x44, 0x44, 
	0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x52, 0x16, 0x24, 0x44, 0x44, 
	0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 
	0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x24, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x25, 0x44, 0x44, 0x44, 
	0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x44, 0x44, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 
	0x44, 0x44, 0x44, 0x45, 0x24, 0x44, 0x44, 0x44, 
	0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x35, 0x44, 0x44, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x10, 
	0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x44, 
	0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x24, 0x44, 0x45, 0x24, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x25, 0x45, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x54, 0x44, 0x42, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x20, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x24, 0x44, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x44, 0x44, 0x42, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x25, 0x44, 0x44, 0x44, 0x20, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 
	0x54, 0x44, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x64, 0x44, 0x44, 0x25, 0x44, 0x44, 
	0x44, 0x44, 0x42, 0x24, 0x44, 0x44, 0x44, 0x20, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0x44, 0x44, 0x44, 0x42, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x24, 0x44, 0x44, 0x24, 0x44, 0x44, 
	0x44, 0x44, 0x52, 0x44, 0x44, 0x44, 0x44, 0x20, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x25, 
	0x44, 0x44, 0x44, 0x44, 0x51, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x44, 0x44, 0x42, 0x54, 0x44, 0x44, 
	0x44, 0x45, 0x24, 0x44, 0x44, 0x44, 0x44, 0x10, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x24, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x10, 0x00, 0x00, 
	0x00, 0x02, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 
	0x44, 0x52, 0x44, 0x44, 0x44, 0x44, 0x45, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 0x00, 
	0x00, 0x14, 0x44, 0x44, 0x25, 0x44, 0x44, 0x44, 
	0x45, 0x24, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x10, 0x00, 
	0x02, 0x44, 0x44, 0x45, 0x24, 0x44, 0x44, 0x44, 
	0x52, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x51, 0x00, 
	0x14, 0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x45, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 0x11, 
	0x54, 0x44, 0x44, 0x52, 0x45, 0x55, 0x55, 0x52, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x25, 
	0x44, 0x45, 0x22, 0x22, 0x25, 0x55, 0x55, 0x22, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x45, 0x22, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0x22, 0x25, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x42, 0x22, 0x72, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 
	0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x42, 0x23, 0x89, 0x96, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x22, 0x44, 
	0x44, 0x44, 0x44, 0x45, 0x20, 0x00, 0x00, 0x00, 
	0x44, 0x42, 0x1a, 0xb9, 0x99, 0x9a, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x22, 0x44, 0x44, 
	0x44, 0x44, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x42, 0x6a, 0x99, 0x99, 0x99, 0x9a, 0x54, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x25, 0x44, 0x44, 0x45, 0x22, 0x44, 0x44, 0x44, 
	0x44, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x68, 0x99, 0x99, 0x99, 0x99, 0x9c, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x55, 0x44, 0x52, 0x22, 0x24, 0x44, 0x44, 0x44, 
	0x52, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xa9, 0x99, 0x99, 0x99, 0x99, 0x91, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x22, 0x22, 0x25, 0x44, 0x44, 0x45, 0x21, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x89, 0x99, 0x99, 0x99, 0x99, 0xc5, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x52, 0x44, 0x55, 0x44, 0x45, 0x21, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x99, 0x99, 0x99, 0x99, 0x98, 0x24, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x55, 0x44, 0x55, 0x22, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x99, 0x99, 0x99, 0x99, 0x82, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x99, 0x99, 0x99, 0x9a, 0x24, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x99, 0x99, 0x8c, 0x15, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8a, 0x71, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x45, 
	0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x42, 0x54, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x25, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x45, 0x24, 0x44, 0x44, 0x44, 0x44, 0x50, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x25, 0x44, 0x44, 0x44, 0x44, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x54, 0x44, 0x44, 
	0x44, 0x44, 0x42, 0x44, 0x44, 0x44, 0x42, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xad, 0x44, 0x44, 0x44, 0x44, 0x42, 0x54, 0x44, 
	0x44, 0x44, 0x42, 0x54, 0x44, 0x44, 0x56, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xba, 0xd4, 0x44, 0x44, 0x44, 0x52, 0x25, 
	0x44, 0x44, 0x42, 0x44, 0x44, 0x45, 0x60, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xeb, 0xaf, 0x44, 0x44, 0x44, 0x45, 
	0x22, 0x54, 0x52, 0x44, 0x44, 0x41, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0x8d, 0x44, 0x44, 0x44, 
	0x44, 0x55, 0x54, 0x44, 0x44, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0x8c, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x51, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x8c, 0x44, 
	0x44, 0x44, 0x44, 0x45, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x8d, 
	0x44, 0x44, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 
	0xa4, 0x44, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 
	0xe8, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 
	0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe8, 0xc6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xee, 0xee, 0xeb, 0x8c, 0x60, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xee, 0xee, 0xeb, 0x8a, 0x70, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xb8, 0xac, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx bait_fish2_fish2_2_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bait_fish2_fish2_2_ci4_pal_rgba16[] = {
	0x01, 0xd6, 0x39, 0xd1, 0x29, 0x8f, 0x5a, 0x97, 
	0x2a, 0x13, 0x29, 0xd1, 0x4a, 0x53, 0x6b, 0x19, 
	0xc6, 0x2b, 0xff, 0xff, 0x9c, 0xe5, 0xef, 0x31, 
	0x7b, 0x9d, 0x5b, 0x5b, 0xff, 0xb1, 0x3a, 0x97, 
	
};

Vtx bait_fish2_000_offset_002_skinned_mesh_layer_4_vtx_0[2] = {
	{{{-50, 0, 143},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-50, 0, -113},0, {-16, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bait_fish2_000_offset_002_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(bait_fish2_000_offset_002_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx bait_fish2_000_offset_002_mesh_layer_4_vtx_0[2] = {
	{{{-2, 0, 143},0, {2032, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2, 0, -113},0, {2032, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bait_fish2_000_offset_002_mesh_layer_4_tri_0[] = {
	gsSPVertex(bait_fish2_000_offset_002_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx bait_fish2_000_offset_002_mesh_layer_4_vtx_1[4] = {
	{{{-2, 0, 143},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{183, 0, 143},0, {2032, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{183, 0, -113},0, {2032, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2, 0, -113},0, {-16, 2032},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bait_fish2_000_offset_002_mesh_layer_4_tri_1[] = {
	gsSPVertex(bait_fish2_000_offset_002_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bait_fish2_fish2_1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bait_fish2_fish2_1_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 15),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, bait_fish2_fish2_1_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(bait_fish2_fish2_1_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bait_fish2_fish2_1[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_bait_fish2_fish2_2[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bait_fish2_fish2_2_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 15),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, bait_fish2_fish2_2_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(bait_fish2_fish2_2_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bait_fish2_fish2_2[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx bait_fish2_000_offset_002_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_bait_fish2_fish2_1),
	gsSPDisplayList(bait_fish2_000_offset_002_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bait_fish2_fish2_1),
	gsSPEndDisplayList(),
};

Gfx bait_fish2_000_offset_002_mesh_layer_4[] = {
	gsSPDisplayList(mat_bait_fish2_fish2_1),
	gsSPDisplayList(bait_fish2_000_offset_002_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bait_fish2_fish2_1),
	gsSPDisplayList(mat_bait_fish2_fish2_2),
	gsSPDisplayList(bait_fish2_000_offset_002_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_bait_fish2_fish2_2),
	gsSPEndDisplayList(),
};

Gfx bait_fish2_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
