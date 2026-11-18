#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005c1ed8;
extern undefined4 *DAT_005c1edc;
extern undefined4 DAT_005c1ee8;
extern undefined DAT_005c1eec;
extern undefined DAT_005c1f04;
extern undefined DAT_005c1f1c;
extern undefined DAT_005c1f34;
extern undefined DAT_005c1f44;
extern undefined DAT_005c1f4c;
extern undefined DAT_005c1f64;
extern undefined DAT_005c1f74;
extern undefined DAT_005c1f7c;
extern undefined DAT_005c1f94;
extern undefined DAT_005c1fac;
extern undefined DAT_005c1fc4;
extern undefined DAT_005c1fdc;
extern undefined DAT_005c1ff4;
extern undefined4 DAT_005c2004;
extern undefined4 DAT_005c2008;
extern char s_Gully_005c1ee0[];
extern char s_Irene_005c1f2c[];
extern char s_Omote01_005c1fd4[];
extern char s_Omote02_005c1f8c[];
extern char s_Omote03_005c1fa4[];
extern char s_Omote04_005c1fbc[];
extern char s_Osfala_005c1f14[];
extern char s_Rosso_005c1f5c[];
extern char s_Seres_005c1efc[];
extern char s_Zelda_005c1fec[];

// USA 005C1DA8 <- EU 005C1D80 (Ghidra, non-matching)
// GLOBAL DAT_005c1ed8 int
// GLOBAL DAT_005c1edc undefined4 *
// GLOBAL DAT_005c1ee8 undefined4
// GLOBAL DAT_005c1eec undefined
// GLOBAL DAT_005c1f04 undefined
// GLOBAL DAT_005c1f1c undefined
// GLOBAL DAT_005c1f34 undefined
// GLOBAL DAT_005c1f44 undefined
// GLOBAL DAT_005c1f4c undefined
// GLOBAL DAT_005c1f64 undefined
// GLOBAL DAT_005c1f74 undefined
// GLOBAL DAT_005c1f7c undefined
// GLOBAL DAT_005c1f94 undefined
// GLOBAL DAT_005c1fac undefined
// GLOBAL DAT_005c1fc4 undefined
// GLOBAL DAT_005c1fdc undefined
// GLOBAL DAT_005c1ff4 undefined
// GLOBAL DAT_005c2004 undefined4
// GLOBAL DAT_005c2008 undefined4
// GLOBAL s_Gully_005c1ee0 string
// GLOBAL s_Irene_005c1f2c string
// GLOBAL s_Omote01_005c1fd4 string
// GLOBAL s_Omote02_005c1f8c string
// GLOBAL s_Omote03_005c1fa4 string
// GLOBAL s_Omote04_005c1fbc string
// GLOBAL s_Osfala_005c1f14 string
// GLOBAL s_Rosso_005c1f5c string
// GLOBAL s_Seres_005c1efc string
// GLOBAL s_Zelda_005c1fec string

undefined4 func_005C1DA8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005c1ed8;
  *(undefined4 *)(DAT_005c1ed8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c1edc;
  *DAT_005c1edc = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005c1ee8;
  puVar2[7] = DAT_005c1ee8;
  puVar2[8] = s_Gully_005c1ee0;
  puVar2[9] = uVar3;
  puVar2[10] = &DAT_005c1eec;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = s_Seres_005c1efc;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = &DAT_005c1f04;
  puVar2[0x19] = uVar3;
  puVar2[0x1a] = s_Osfala_005c1f14;
  puVar2[0x1b] = uVar3;
  puVar2[0x1c] = &DAT_005c1f1c;
  puVar2[0x22] = uVar3;
  puVar2[0x23] = s_Irene_005c1f2c;
  puVar2[0x24] = uVar3;
  puVar2[0x25] = &DAT_005c1f34;
  puVar2[0x2b] = uVar3;
  puVar2[0x2c] = &DAT_005c1f44;
  puVar2[0x2d] = uVar3;
  puVar2[0x2e] = &DAT_005c1f4c;
  puVar2[0x34] = uVar3;
  puVar2[0x35] = s_Rosso_005c1f5c;
  puVar2[0x36] = uVar3;
  puVar2[0x37] = &DAT_005c1f64;
  puVar2[0x3d] = uVar3;
  puVar2[0x3e] = &DAT_005c1f74;
  puVar2[0x3f] = uVar3;
  puVar2[0x40] = &DAT_005c1f7c;
  puVar2[0x46] = uVar3;
  puVar2[0x47] = s_Omote02_005c1f8c;
  puVar2[0x48] = uVar3;
  puVar2[0x49] = &DAT_005c1f94;
  puVar2[0x4f] = uVar3;
  puVar2[0x50] = s_Omote03_005c1fa4;
  puVar2[0x51] = uVar3;
  puVar2[0x52] = &DAT_005c1fac;
  puVar2[0x58] = uVar3;
  puVar2[0x59] = s_Omote04_005c1fbc;
  puVar2[0x5a] = uVar3;
  puVar2[0x5b] = &DAT_005c1fc4;
  puVar2[0x61] = uVar3;
  puVar2[0x62] = s_Omote01_005c1fd4;
  puVar2[99] = uVar3;
  puVar2[100] = &DAT_005c1fdc;
  puVar2[0x6a] = uVar3;
  puVar2[0x6b] = s_Zelda_005c1fec;
  puVar2[0x6c] = uVar3;
  puVar2[0x6d] = &DAT_005c1ff4;
  return func_005902C0(0);
}

