// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0028F240(int param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_005569A4();
extern int func_00556EAC(int param_1,int param_2);
extern int func_00556EC4(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_004bb898;
extern float DAT_004bb89c;
extern float *DAT_004bb8a0;
extern float DAT_004bb8a4;
extern int *DAT_004bb8a8;
extern float DAT_004bb8ac;
extern undefined4 DAT_004bb8b0;
extern float DAT_004bb8b4;
extern float DAT_004bb8b8;

// USA 004BB708 <- EU 004BB6E0 (Ghidra, non-matching)
// GLOBAL DAT_004bb898 int *
// GLOBAL DAT_004bb89c float
// GLOBAL DAT_004bb8a0 float *
// GLOBAL DAT_004bb8a4 float
// GLOBAL DAT_004bb8a8 int *
// GLOBAL DAT_004bb8ac float
// GLOBAL DAT_004bb8b0 undefined4
// GLOBAL DAT_004bb8b4 float
// GLOBAL DAT_004bb8b8 float

void func_004BB708(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  piVar1 = DAT_004bb898;
  if ((*(char *)(param_1 + 0x44c) != '\0') ||
     ((*(char *)(param_1 + 0x44a) == '\x01' && (bVar3 = func_00556EAC(*DAT_004bb898,0x4e), bVar3))))
  {
    *(undefined1 *)(param_1 + 0x44c) = 0;
    bVar3 = func_0028F240(*piVar1);
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x44c) = 1;
      func_005569A4(*piVar1,&fStack_38);
      local_34 = DAT_004bb89c;
      fVar7 = DAT_004bb89c;
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&fStack_38);
      local_2c = *DAT_004bb8a0;
      local_28 = DAT_004bb8a0[1];
      fStack_24 = DAT_004bb8a0[2];
      fVar6 = DAT_004bb8a4;
      iVar4 = func_00588BE4(param_1);
      piVar2 = DAT_004bb8a8;
      if (iVar4 == *DAT_004bb8a8) {
        fVar6 = DAT_004bb8ac;
      }
      iVar4 = func_0014EEC8(param_1,(uint)&local_2c,DAT_004bb8a0,DAT_004bb8b0,fVar6);
      if (iVar4 != 0) {
        local_28 = fVar7;
        func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_2c);
      }
      iVar4 = *(int *)(param_1 + 0x43c);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_004D8AEC((float *)(iVar4 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
      func_0043625C(*(int **)(*(int *)(param_1 + 0x444) + 0x14),(undefined4 *)(param_1 + 0x3d0));
      func_004ED9C8(*(int *)(param_1 + 0x444));
      fVar7 = DAT_004bb8b4;
      iVar4 = func_00588BE4(param_1);
      if (iVar4 == *piVar2) {
        fVar7 = DAT_004bb8b8;
      }
      pfVar5 = (float *)func_00556EC4(*piVar1);
      fVar6 = *pfVar5 - *(float *)(param_1 + 0x3d0);
      if ((fVar6 <= fVar7) && (fVar8 = -fVar7, fVar8 <= fVar6)) {
        iVar4 = func_00556EC4(*piVar1);
        fVar6 = *(float *)(iVar4 + 8) - *(float *)(param_1 + 0x3d8);
        if ((fVar6 <= fVar7) && (fVar8 <= fVar6)) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x44c) = 0;
    }
  }
  return;
}

