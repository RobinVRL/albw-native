#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c10ec;
extern undefined4 *DAT_005c10f0;
extern undefined4 *DAT_005c10f4;
extern undefined DAT_005c10f8;
extern undefined4 DAT_005c1100;
extern undefined DAT_005c1104;
extern undefined DAT_005c1108;
extern undefined DAT_005c110c;
extern undefined DAT_005c1110;
extern undefined DAT_005c111c;
extern undefined DAT_005c1128;
extern undefined DAT_005c113c;
extern undefined DAT_005c114c;
extern undefined DAT_005c115c;
extern undefined DAT_005c1170;
extern undefined DAT_005c117c;
extern undefined DAT_005c118c;
extern undefined DAT_005c119c;
extern undefined DAT_005c11a4;
extern undefined DAT_005c11b0;
extern undefined DAT_005c11c0;
extern undefined DAT_005c11cc;
extern undefined DAT_005c11d8;
extern undefined DAT_005c11e4;
extern undefined DAT_005c11f0;
extern undefined DAT_005c11fc;
extern undefined DAT_005c1204;
extern undefined DAT_005c120c;
extern undefined DAT_005c1218;
extern undefined DAT_005c1224;
extern undefined DAT_005c122c;
extern undefined DAT_005c1234;
extern undefined DAT_005c1240;
extern undefined DAT_005c124c;
extern undefined DAT_005c1260;
extern undefined DAT_005c1268;
extern undefined4 DAT_005c1274;
extern undefined4 DAT_005c1278;
extern undefined4 *DAT_005c127c;
extern undefined DAT_005c1280;
extern uint *DAT_005c1298;
extern undefined4 DAT_005c129c;
extern undefined4 *DAT_005c12a0;
extern undefined4 DAT_005c12a4;
extern char s_ObjSandPillar_005c1288[];

// USA 005C0EE4 <- EU 005C0EBC (Ghidra, non-matching)
// GLOBAL DAT_005c10ec int
// GLOBAL DAT_005c10f0 undefined4 *
// GLOBAL DAT_005c10f4 undefined4 *
// GLOBAL DAT_005c10f8 undefined
// GLOBAL DAT_005c1100 undefined4
// GLOBAL DAT_005c1104 undefined
// GLOBAL DAT_005c1108 undefined
// GLOBAL DAT_005c110c undefined
// GLOBAL DAT_005c1110 undefined
// GLOBAL DAT_005c111c undefined
// GLOBAL DAT_005c1128 undefined
// GLOBAL DAT_005c113c undefined
// GLOBAL DAT_005c114c undefined
// GLOBAL DAT_005c115c undefined
// GLOBAL DAT_005c1170 undefined
// GLOBAL DAT_005c117c undefined
// GLOBAL DAT_005c118c undefined
// GLOBAL DAT_005c119c undefined
// GLOBAL DAT_005c11a4 undefined
// GLOBAL DAT_005c11b0 undefined
// GLOBAL DAT_005c11c0 undefined
// GLOBAL DAT_005c11cc undefined
// GLOBAL DAT_005c11d8 undefined
// GLOBAL DAT_005c11e4 undefined
// GLOBAL DAT_005c11f0 undefined
// GLOBAL DAT_005c11fc undefined
// GLOBAL DAT_005c1204 undefined
// GLOBAL DAT_005c120c undefined
// GLOBAL DAT_005c1218 undefined
// GLOBAL DAT_005c1224 undefined
// GLOBAL DAT_005c122c undefined
// GLOBAL DAT_005c1234 undefined
// GLOBAL DAT_005c1240 undefined
// GLOBAL DAT_005c124c undefined
// GLOBAL DAT_005c1260 undefined
// GLOBAL DAT_005c1268 undefined
// GLOBAL DAT_005c1274 undefined4
// GLOBAL DAT_005c1278 undefined4
// GLOBAL DAT_005c127c undefined4 *
// GLOBAL DAT_005c1280 undefined
// GLOBAL DAT_005c1298 uint *
// GLOBAL DAT_005c129c undefined4
// GLOBAL DAT_005c12a0 undefined4 *
// GLOBAL DAT_005c12a4 undefined4
// GLOBAL s_ObjSandPillar_005c1288 string

undefined8 func_005C0EE4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_005c10ec;
  *(undefined4 *)(DAT_005c10ec + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  local_18 = DAT_005c1100;
  puVar2 = DAT_005c10f0;
  *DAT_005c10f0 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005c10f4;
  DAT_005c10f4[1] = &DAT_005c10f8;
  *puVar2 = local_18;
  puVar2[3] = &DAT_005c1104;
  puVar2[2] = local_18;
  puVar2[5] = &DAT_005c1108;
  puVar2[4] = local_18;
  puVar2[7] = &DAT_005c110c;
  puVar2[6] = local_18;
  puVar2[9] = &DAT_005c1110;
  puVar2[8] = local_18;
  puVar2[0xb] = &DAT_005c111c;
  puVar2[10] = local_18;
  puVar2[0xd] = &DAT_005c1128;
  puVar2[0xc] = local_18;
  puVar2[0xf] = &DAT_005c113c;
  puVar2[0xe] = local_18;
  puVar2[0x11] = &DAT_005c114c;
  puVar2[0x10] = local_18;
  puVar2[0x13] = &DAT_005c115c;
  puVar2[0x12] = local_18;
  puVar2[0x15] = &DAT_005c1170;
  puVar2[0x14] = local_18;
  puVar2[0x17] = &DAT_005c117c;
  puVar2[0x16] = local_18;
  puVar2[0x19] = &DAT_005c118c;
  puVar2[0x18] = local_18;
  puVar2[0x1b] = &DAT_005c119c;
  puVar2[0x1a] = local_18;
  puVar2[0x1d] = &DAT_005c11a4;
  puVar2[0x1c] = local_18;
  puVar2[0x1f] = &DAT_005c11b0;
  puVar2[0x1e] = local_18;
  puVar2[0x21] = &DAT_005c11c0;
  puVar2[0x20] = local_18;
  puVar2[0x23] = &DAT_005c11cc;
  puVar2[0x22] = local_18;
  puVar2[0x25] = &DAT_005c11d8;
  puVar2[0x24] = local_18;
  puVar2[0x27] = &DAT_005c11e4;
  puVar2[0x26] = local_18;
  puVar2[0x29] = &DAT_005c11f0;
  puVar2[0x28] = local_18;
  puVar2[0x2b] = &DAT_005c11fc;
  puVar2[0x2a] = local_18;
  puVar2[0x2d] = &DAT_005c1204;
  puVar2[0x2c] = local_18;
  puVar2[0x2f] = &DAT_005c120c;
  puVar2[0x2e] = local_18;
  puVar2[0x31] = &DAT_005c1218;
  puVar2[0x30] = local_18;
  puVar2[0x33] = &DAT_005c1224;
  puVar2[0x32] = local_18;
  puVar2[0x35] = &DAT_005c122c;
  puVar2[0x34] = local_18;
  puVar2[0x37] = &DAT_005c1234;
  puVar2[0x36] = local_18;
  puVar2[0x39] = &DAT_005c1240;
  puVar2[0x38] = local_18;
  puVar2[0x3b] = &DAT_005c124c;
  puVar2[0x3a] = local_18;
  puVar2[0x3d] = &DAT_005c1260;
  puVar2[0x3c] = local_18;
  puVar2[0x3e] = local_18;
  puVar2[0x3f] = &DAT_005c1268;
  puVar2 = DAT_005c127c;
  puVar4 = DAT_005c127c + 3;
  *DAT_005c127c = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  puStack_14 = &DAT_005c1280;
  uStack_10 = local_18;
  local_c = s_ObjSandPillar_005c1288;
  uVar3 = func_0019B51C(DAT_005c12a0,DAT_005c129c,*DAT_005c1298,(int)&uStack_10,DAT_005c127c,
                        &local_18,0);
  return CONCAT44(DAT_005c12a4,uVar3);
}

