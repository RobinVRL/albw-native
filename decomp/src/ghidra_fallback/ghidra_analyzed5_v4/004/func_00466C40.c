#include "ghidra_types.h"

extern int func_00464F70(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined1 param_5);
extern int func_00466FE0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4);
extern int func_00529E54(int param_1,int param_2);
extern int func_005568E8(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00581C5C(int param_1);
extern int func_00581E5C(int param_1);
extern int func_0058208C(int param_1,int *param_2,int param_3);
extern int *DAT_00466fa4;
extern int *DAT_00466fa8;
extern uint DAT_00466fac;
extern uint DAT_00466fb0;
extern uint DAT_00466fb4;

// USA 00466C40 <- EU 00466C18 (Ghidra, non-matching)
// GLOBAL DAT_00466fa4 int *
// GLOBAL DAT_00466fa8 int *
// GLOBAL DAT_00466fac uint
// GLOBAL DAT_00466fb0 uint
// GLOBAL DAT_00466fb4 uint

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_00466C40(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  iVar9 = *DAT_00466fa4;
  if ((iVar9 != 0) && (pfVar2 = (float *)func_00581E5C(iVar9), pfVar2 != (float *)0x0)) {
    fVar10 = pfVar2[2];
    fVar11 = *pfVar2;
    uVar12 = (ulonglong)(uint)ALBW_AS_U32(pfVar2[1]);
    iVar3 = func_00581C5C(iVar9);
    if ((iVar3 != 0) && (iVar7 = *DAT_00466fa8, iVar7 != 0)) {
      objStack_48[0] = (uint)ALBW_AS_U32((**(float **)(iVar7 + 0x1c) * fVar10 + fVar11));
      objStack_48[1] = (uint)ALBW_AS_U32(((*(float **)(iVar7 + 0x1c))[2] * fVar10 + ALBW_AS_F32(uVar12)));
      if ((int)*(short *)(iVar3 + 0x46) == (int)*(char *)(param_1 + 299)) {
        iVar3 = func_0055696C(iVar7,0x1f);
        if (iVar3 == 3) {
          uVar5 = 1;
        }
        else {
          iVar3 = func_0055696C(iVar7,0x1f);
          if (iVar3 == 4) {
            uVar5 = 2;
          }
          else {
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = 3;
      }
      uVar4 = func_005568E8(iVar7);
      func_00466FE0(param_1,objStack_48,uVar5,uVar4);
    }
    iVar9 = func_0058208C(iVar9,(int *)(param_1 + 0x1d8),(int)*(char *)(param_1 + 299));
    if (iVar9 != 0) {
      piVar6 = *(int **)(param_1 + 0x1e0);
      piVar8 = piVar6 + *(int *)(param_1 + 0x1d8);
      for (; piVar6 != piVar8; piVar6 = piVar6 + 1) {
        pfVar2 = (float *)*piVar6;
        local_40 = pfVar2[3] + *pfVar2 * fVar10 + fVar11;
        local_3c = *(float *)(*piVar6 + 0x10) + pfVar2[2] * fVar10 + ALBW_AS_F32(uVar12);
        iVar9 = *piVar6;
        uVar5 = *(uint *)(iVar9 + 0x14);
        iVar3 = *(int *)(iVar9 + 0x1c);
        if ((~uVar5 & 0x20000001) == 0) {
          objStack_48[0] = 0;
          func_00464F70(param_1,&local_40,6,iVar3,0);
        }
        else if ((~uVar5 & 0x20000008) == 0) {
          objStack_48[0] = 0;
          func_00464F70(param_1,&local_40,4,iVar3,0);
        }
        else if (((~uVar5 & 0x20000004) == 0) || ((DAT_00466fac & ~uVar5) == 0)) {
          objStack_48[0] = 0;
          func_00464F70(param_1,&local_40,5,iVar3,0);
        }
        else if ((~uVar5 & 0x20000002) == 0) {
          objStack_48[0] = 0;
          func_00464F70(param_1,&local_40,7,iVar3,0);
        }
        else if ((uVar5 & 0x10) == 0) {
          if ((uVar5 & 0x20) == 0) {
            if ((uVar5 & 0x80) == 0) {
              if ((uVar5 & 0x100) == 0) {
                if (((DAT_00466fb0 & ~uVar5) == 0) && (bVar1 = func_00529E54(iVar9,0), bVar1)) {
                  bVar1 = func_00529E54(*piVar6,0);
                  objStack_48[0] = (uint)bVar1;
                  func_00464F70(param_1,&local_40,0xb,iVar3,bVar1);
                }
                else if (((DAT_00466fb4 & ~*(uint *)(*piVar6 + 0x14)) == 0) &&
                        (bVar1 = func_00529E54(*piVar6,0), bVar1)) {
                  bVar1 = func_00529E54(*piVar6,0);
                  objStack_48[0] = (uint)bVar1;
                  func_00464F70(param_1,&local_40,10,iVar3,bVar1);
                }
              }
              else {
                objStack_48[0] = 0;
                func_00464F70(param_1,&local_40,0xc,iVar3,0);
              }
            }
            else {
              objStack_48[0] = 0;
              func_00464F70(param_1,&local_40,0xd,iVar3,0);
            }
          }
          else {
            objStack_48[0] = 0;
            func_00464F70(param_1,&local_40,9,iVar3,0);
          }
        }
        else {
          objStack_48[0] = 0;
          func_00464F70(param_1,&local_40,8,iVar3,0);
        }
      }
    }
  }
  return;
}

