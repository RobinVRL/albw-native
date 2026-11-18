// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0012710C(undefined4 param_1,undefined4 param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_00521184();
extern float func_00521298(int param_1);
extern int func_0058A7D4(void);
extern float fRam00126f38;
extern int iRam00126f3c;
extern undefined4 uRam00126f40;
extern undefined4 DAT_00126f64;
extern undefined *PTR_00126f44;
extern undefined *PTR_00126f48;
extern undefined *PTR_00126f4c;
extern undefined *PTR_00126f50;
extern undefined *PTR_00126f54;
extern undefined *PTR_00126f58;
extern undefined *PTR_00126f5c;
extern undefined *PTR_00126f60;

// USA 00126D4C <- EU 00126D4C (Ghidra, non-matching)
// GLOBAL DAT_00126f64 undefined4
// GLOBAL PTR_00126f44 undefined *
// GLOBAL PTR_00126f48 undefined *
// GLOBAL PTR_00126f4c undefined *
// GLOBAL PTR_00126f50 undefined *
// GLOBAL PTR_00126f54 undefined *
// GLOBAL PTR_00126f58 undefined *
// GLOBAL PTR_00126f5c undefined *
// GLOBAL PTR_00126f60 undefined *
// GLOBAL UNK_00126f38 float
// GLOBAL UNK_00126f3c int
// GLOBAL UNK_00126f40 uint

void func_00126D4C(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint extraout_r1;
  undefined *puVar7;
  float fVar8;
  undefined8 uVar9;
  
  func_004FABDC(param_1,3,0,0);
  iVar3 = func_00520FC0();
  fVar8 = *(float *)(iVar3 + 4) - *(float *)(param_1 + 0x3d4);
  if ((((uint)ALBW_AS_U32(fRam00126f38) < (uint)ALBW_AS_U32(fVar8)) || ((int)((int)ALBW_AS_U32(fRam00126f38) + 0x80000000U) < (int)ALBW_AS_U32(fVar8)))
     || (fVar8 = func_00521298(param_1), iRam00126f3c < (int)ALBW_AS_U32(fVar8))) {
    if (*(char *)(param_1 + 0x8ed) != '\0') {
      puVar5 = (uint *)func_0058A7D4();
      uVar6 = func_00111A64(puVar5);
      uVar6 = (uint)((ulonglong)uVar6 * 3 >> 0x20);
      cVar1 = *(char *)(param_1 + 0x8ec);
      if (2 < uVar6) {
        uVar6 = 0;
      }
      puVar7 = PTR_00126f44;
      if (((((cVar1 != '\0') && (puVar7 = PTR_00126f48, cVar1 != '\x01')) &&
           ((puVar7 = PTR_00126f4c, cVar1 != '\x02' &&
            ((puVar7 = PTR_00126f50, cVar1 != '\x03' &&
             (puVar7 = PTR_00126f54, cVar1 != '\x04')))))) &&
          (puVar7 = PTR_00126f58, cVar1 != '\x05')) &&
         (puVar7 = PTR_00126f5c, cVar1 != '\x06')) {
        puVar7 = PTR_00126f60;
      }
      uVar2 = puVar7[uVar6];
      switch(uVar2) {
      case 0:
        uVar4 = 0x20000000;
        break;
      case 1:
        uVar4 = 0x40000000;
        break;
      case 2:
        uVar4 = 0x60000000;
        break;
      case 3:
        uVar4 = 0x80000000;
        break;
      case 4:
        uVar4 = 0xa0000000;
        break;
      case 5:
        uVar4 = 0xc0000000;
        break;
      case 6:
        uVar4 = 0xe0000000;
        break;
      default:
        uVar4 = 0;
      }
      *(undefined4 *)(param_1 + 0x8e0) = uVar4;
      *(undefined1 *)(param_1 + 0x8ec) = uVar2;
      goto LAB_00126f00;
    }
    puVar5 = (uint *)func_0058A7D4();
    uVar6 = func_00111A64(puVar5);
    *(char *)(param_1 + 0x8ec) = (char)((ulonglong)uVar6 * 8 >> 0x20);
    uVar6 = func_0012710C(param_1,(int)((ulonglong)uVar6 * 8 >> 0x20));
  }
  else {
    iVar3 = func_00521184(param_1);
    uVar9 = func_00114608(uRam00126f40,extraout_r1);
    uVar6 = (int)uVar9 + iVar3 & 0xe0000000;
  }
  *(uint *)(param_1 + 0x8e0) = uVar6;
LAB_00126f00:
  puVar5 = (uint *)func_0058A7D4();
  uVar6 = func_00111A64(puVar5);
  uVar4 = DAT_00126f64;
  *(int *)(param_1 + 0x8e8) = ((int)((ulonglong)uVar6 * 3 >> 0x20) + 1) * 0x1e;
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  return;
}

