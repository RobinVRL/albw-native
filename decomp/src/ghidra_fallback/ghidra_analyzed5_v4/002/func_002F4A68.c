#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_002f4bd8;
extern uint *DAT_002f4bdc;
extern int *DAT_002f4be0;
extern undefined4 DAT_002f4be4;
extern undefined4 *DAT_002f4be8;
extern uint *DAT_002f4bec;
extern undefined4 *DAT_002f4bf0;
extern undefined4 DAT_002f4bf4;
extern float DAT_002f4bf8;
extern undefined4 DAT_002f4bfc;

// USA 002F4A68 <- EU 002F4A44 (Ghidra, non-matching)
// GLOBAL DAT_002f4bd8 int *
// GLOBAL DAT_002f4bdc uint *
// GLOBAL DAT_002f4be0 int *
// GLOBAL DAT_002f4be4 undefined4
// GLOBAL DAT_002f4be8 undefined4 *
// GLOBAL DAT_002f4bec uint *
// GLOBAL DAT_002f4bf0 undefined4 *
// GLOBAL DAT_002f4bf4 undefined4
// GLOBAL DAT_002f4bf8 float
// GLOBAL DAT_002f4bfc undefined4

void func_002F4A68(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  uVar4 = DAT_002f4be4;
  piVar3 = DAT_002f4be0;
  puVar2 = DAT_002f4bdc;
  piVar1 = DAT_002f4bd8;
  iVar7 = 0;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    return;
  }
  do {
    iVar6 = (int)*(short *)(param_1 + 0x5e + iVar7 * 6);
    if ((0 < iVar6) &&
       (puVar5 = (undefined4 *)func_0052FBDC(*piVar1 + 0x3dbbc,iVar6,0), puVar5 != (undefined4 *)0x0
       )) {
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002f4bdc), iVar6 != 0)) {
        *DAT_002f4be8 = uVar4;
      }
      iVar6 = (**(code **)*puVar5)(puVar5,DAT_002f4be8);
      if (iVar6 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      iVar6 = func_00588BE4((int)puVar5);
      if (iVar6 == *piVar3) {
        if (((*DAT_002f4bec & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002f4bec), iVar7 != 0))
        {
          *DAT_002f4bf0 = DAT_002f4bf4;
        }
        if ((puVar5 == (undefined4 *)0x0) ||
           (iVar7 = (**(code **)*puVar5)(puVar5,DAT_002f4bf0), iVar7 == 0)) {
          puVar5 = (undefined4 *)0x0;
        }
        func_004D80A4(&local_30,*(uint *)(param_1 + 1000),DAT_002f4bf8);
        local_2c = DAT_002f4bfc;
        func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x3d0));
        puVar5[0xfa] = *(undefined4 *)(param_1 + 1000);
        puVar5[0xda] = ALBW_AS_U32(local_30);
        puVar5[0xdb] = local_2c;
        puVar5[0xdc] = uStack_28;
        puVar5[0xf4] = ALBW_AS_U32(local_30);
        puVar5[0xf5] = local_2c;
        puVar5[0xf6] = uStack_28;
        return;
      }
    }
    iVar7 = iVar7 + 1;
    if ((int)(uint)*(byte *)(param_1 + 0x5c) <= iVar7) {
      return;
    }
  } while( true );
}

