#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003929C4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004AF514(int param_1);
extern int func_004AF5C4(int *param_1);
extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_00547514(int param_1);
extern int func_00588BE4(int param_1);
extern float DAT_004b014c;
extern uint DAT_004b0150;
extern int *DAT_004b0154;
extern int *DAT_004b0158;
extern int DAT_004b015c;
extern undefined4 DAT_004b0160;
extern undefined4 DAT_004b0164;
extern undefined4 DAT_004b0168;
extern int *DAT_004b016c;
extern float DAT_004b0170;
extern float DAT_004b0174;
extern float DAT_004b0178;

// USA 004AFF14 <- EU 004AFEEC (Ghidra, non-matching)
// GLOBAL DAT_004b014c float
// GLOBAL DAT_004b0150 uint
// GLOBAL DAT_004b0154 int *
// GLOBAL DAT_004b0158 int *
// GLOBAL DAT_004b015c int
// GLOBAL DAT_004b0160 undefined4
// GLOBAL DAT_004b0164 undefined4
// GLOBAL DAT_004b0168 undefined4
// GLOBAL DAT_004b016c int *
// GLOBAL DAT_004b0170 float
// GLOBAL DAT_004b0174 float
// GLOBAL DAT_004b0178 float

undefined4 func_004AFF14(int *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define iStack_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 ((int *)(albw_frame + 0x1c))
  #define uStack_44 (*(uint *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(undefined1 *)(albw_frame + 0x3c))
  #define iStack_30 (*(int *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define afStack_28 ((float *)(albw_frame + 0x48))
  piVar2 = DAT_004b016c;
  if ((char)param_1[0x15b] == '\0') {
    cVar1 = (char)param_1[0x13f];
    if (cVar1 == '\0') {
      uStack_44 = DAT_004b0150 | param_2 & 0xffff0000;
      local_54[0] = 0;
      local_54[1] = 0;
      local_54[2] = 0;
      local_40 = 0xff;
      local_3c = 0;
      local_34 = 0;
      local_54[3] = param_1[0xb3];
      local_38 = param_1[0x140];
      fVar6 = DAT_004b014c;
      uVar3 = func_004A8F40(*DAT_004b0154,local_54,0x1200);
      if ((uVar3 != 0) && ((char)param_1[0x15b] == '\0')) {
        iVar4 = func_00588BE4((int)param_1);
        if (iVar4 == *DAT_004b0158) {
          iStack_68 = DAT_004b015c;
          uStack_64 = DAT_004b0160;
          func_00150A84(param_1,&iStack_68,0);
        }
        else {
          iStack_30 = DAT_004b015c;
          uStack_2c = DAT_004b0164;
          func_00150A84(param_1,&iStack_30,0);
        }
        (**(code **)(param_1[200] + 0x30))(param_1 + 200);
        local_5c = DAT_004b0168;
        *(undefined1 *)(param_1 + 0x15b) = 1;
        local_60 = fVar6;
        local_58 = fVar6;
        func_00115C54(afStack_28,(float *)(param_1 + 0xf4),&local_60);
        func_0014EC00((int)param_1,afStack_28,param_1[0xfa],
                      (int)(char)*(undefined2 *)((int)param_1 + 0x2e));
      }
    }
    else if (cVar1 == '\x01') {
      fVar8 = DAT_004b014c;
      func_0052E32C(*DAT_004b016c,param_1 + 0xf4);
      fVar7 = DAT_004b0178;
      fVar6 = DAT_004b0174;
      iVar4 = *piVar2;
      param_1[0xfa] = **(int **)(iVar4 + 0x24);
      fVar5 = *(float *)(*(int *)(iVar4 + 0x1c) + 4);
      param_1[0x15d] = (int)ALBW_AS_U32(fVar5);
      fVar7 = (fVar7 * ((ALBW_AS_F32(param_1[0xf5]) - fVar5) - fVar8)) / fVar6 + DAT_004b0170;
      fVar6 = DAT_004b0170;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar7)) {
        fVar6 = fVar7;
      }
      param_1[0x15e] = (int)ALBW_AS_U32(fVar7);
      param_1[0x15e] = (int)ALBW_AS_U32(fVar6);
    }
    else if (cVar1 == '\x02') {
      func_004AF5C4(param_1);
    }
    else if (cVar1 == '\x03') {
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
      iVar4 = func_003929C4(param_1 + 0x169);
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x15b) = 1;
      }
    }
    return func_004AF514((int)param_1);
  }
  if ((short)param_1[0xb] == 1) {
    func_00547514((int)(param_1 + 1));
  }
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  return 0;
}

