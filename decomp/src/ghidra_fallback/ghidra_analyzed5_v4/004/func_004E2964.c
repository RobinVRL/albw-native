#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004E1798(int *param_1,int param_2);
extern int func_004E23AC(int *param_1,undefined1 *param_2,int param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0066A794(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e2cbc;
extern int DAT_004e2cc0;
extern int *DAT_004e2cc4;
extern int *DAT_004e2cc8;
extern int *DAT_004e2ccc;
extern int *DAT_004e2cd0;
extern int *DAT_004e2cd4;
extern int *DAT_004e2cd8;
extern int *DAT_004e2cdc;
extern int *DAT_004e2ce0;

// USA 004E2964 <- EU 004E293C (Ghidra, non-matching)
// GLOBAL DAT_004e2cbc float
// GLOBAL DAT_004e2cc0 int
// GLOBAL DAT_004e2cc4 int *
// GLOBAL DAT_004e2cc8 int *
// GLOBAL DAT_004e2ccc int *
// GLOBAL DAT_004e2cd0 int *
// GLOBAL DAT_004e2cd4 int *
// GLOBAL DAT_004e2cd8 int *
// GLOBAL DAT_004e2cdc int *
// GLOBAL DAT_004e2ce0 int *

int func_004E2964(int *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  piVar2 = DAT_004e2cc4;
  uVar3 = (uint)(char)param_1[0x109];
  if ((uVar3 != 5) || (DAT_004e2cbc <= ALBW_AS_F32(param_1[0xf8]))) {
    if ((uVar3 != 2 && uVar3 != 3) && ((uVar3 != 4 && uVar3 != 5) && uVar3 != 6)) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x20);
      uVar7 = uVar6 & 0x1f;
      if ((uVar7 != 6) || (uVar3 = (uVar6 & 0x7e0) >> 5, uVar3 != 0xf && uVar3 != 0x18)) {
        if (uVar7 == 4) {
          uVar3 = uVar6 & 0x7e0;
        }
        if (uVar7 == 4 && uVar3 == 0x160) {
          cVar1 = (char)param_1[0x14f];
        }
        else {
          uVar3 = *(uint *)(param_2 + 0x28);
          param_1[0x131] = uVar3;
          iVar4 = func_0052FBA0(*piVar2 + 0x3dbbc,uVar3);
          if ((*(uint *)(param_2 + 0x24) & 0x20) != 0) {
            *(undefined1 *)(param_1 + 0x14b) = 0;
          }
          if ((char)param_1[0x14b] != '\0') {
            func_0035227C((int)(param_1 + 0xc9),(*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
          }
          if (((iVar4 == 0) || (iVar5 = func_00588BE4(iVar4), iVar5 != *DAT_004e2cc8)) ||
             ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x1a0)) {
            local_38 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_38) & 0xffffff00));
            switch((*(uint *)(param_2 + 0x24) & 0x700) >> 8) {
            default:
              if (iVar4 == 0) {
                return 0;
              }
              iVar5 = func_00588BE4(iVar4);
              if ((((iVar5 != *DAT_004e2ccc) && (iVar5 != *DAT_004e2cd0)) &&
                  ((iVar5 != *DAT_004e2cd4 && ((iVar5 != *DAT_004e2cd8 && (iVar5 != *DAT_004e2cdc)))
                   ))) && (iVar5 != *DAT_004e2ce0)) {
                param_1[0x132] = *(int *)(iVar4 + 0x3d0);
                param_1[0x133] = *(int *)(iVar4 + 0x3d4);
                param_1[0x134] = *(int *)(iVar4 + 0x3d8);
                iVar4 = func_004E1798(param_1,param_2);
                return iVar4;
              }
              func_0066A794(param_1 + 0x108,3);
              return 1;
            case 1:
              iVar4 = 0;
              break;
            case 2:
              iVar4 = 3;
              break;
            case 3:
              iVar4 = 1;
              break;
            case 4:
              iVar4 = 2;
              break;
            case 5:
              iVar4 = 5;
            }
            func_004E23AC(param_1,(undefined1 *)&local_38,iVar4,param_2);
            return (int)(*(undefined1 *)((char *)&local_38 + 0));
          }
          cVar1 = (char)param_1[0x14f];
        }
        if (cVar1 == '\0') {
          param_1[0x150] = *(int *)(param_2 + 4);
          param_1[0x151] = *(int *)(param_2 + 8);
          param_1[0x152] = *(int *)(param_2 + 0xc);
          param_1[0x153] = *(int *)(param_2 + 0x10);
          param_1[0x154] = *(int *)(param_2 + 0x14);
          param_1[0x155] = *(int *)(param_2 + 0x18);
        }
        *(undefined1 *)((int)param_1 + 0x53d) = 1;
        return 0;
      }
    }
  }
  else {
    fVar8 = *(float *)(param_2 + 8);
    fVar9 = fVar8;
    if (fVar8 <= DAT_004e2cbc) {
      fVar9 = -fVar8;
    }
    if ((int)ALBW_AS_U32(fVar9) < DAT_004e2cc0) {
      fVar10 = *(float *)(param_2 + 0xc);
      fVar9 = SQRT(ALBW_AS_F32(param_1[0x13c]) * ALBW_AS_F32(param_1[0x13c]) +
                   ALBW_AS_F32(param_1[0x13e]) * ALBW_AS_F32(param_1[0x13e]));
      fVar8 = SQRT(ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
                   ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9]));
      param_1[0x13c] = (int)ALBW_AS_U32((*(float *)(param_2 + 4) * fVar9));
      param_1[0x13e] = (int)ALBW_AS_U32((fVar10 * fVar9));
      fVar9 = *(float *)(param_2 + 0xc);
      param_1[0xf7] = (int)ALBW_AS_U32((*(float *)(param_2 + 4) * fVar8));
      param_1[0xf9] = (int)ALBW_AS_U32((fVar9 * fVar8));
      func_00115D70(&local_2c,(float *)(param_2 + 4),*(float *)(param_2 + 0x1c));
      local_38 = local_2c;
      uStack_34 = uStack_28;
      uStack_30 = uStack_24;
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_38);
    }
    else if (DAT_004e2cbc <= fVar8) {
      func_0066A794(param_1 + 0x108,6);
    }
    else {
      func_00151148(param_1[0x116],0);
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
  }
  return 0;
}

