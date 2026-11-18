// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_003248BC(undefined4 *param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054D758(int param_1,int param_2);
extern int func_005568E8(int param_1);
extern int func_005569D4();
extern int *DAT_004f7b84;
extern float DAT_004f7b88;
extern float DAT_004f7b8c;

// USA 004F7A5C <- EU 004F7A34 (Ghidra, non-matching)
// GLOBAL DAT_004f7b84 int *
// GLOBAL DAT_004f7b88 float
// GLOBAL DAT_004f7b8c float

undefined4 func_004F7A5C(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  piVar1 = DAT_004f7b84;
  piVar5 = *(int **)(param_1 + 0x438);
  iVar3 = func_005568E8(*DAT_004f7b84);
  if (*piVar5 == iVar3) {
    bVar2 = func_0054D758((int)*(undefined4 **)(param_1 + 0x438),param_2);
    if (bVar2) {
LAB_004f7a90:
      iVar3 = func_005568E8(*piVar1);
      iVar4 = *(int *)(param_2 + 0x28);
      if ((*(int *)(param_2 + 0x34) != 0) && (*(short *)(*(int *)(param_2 + 0x34) + 10) == 4)) {
        *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x2000000;
      }
      if (iVar4 == iVar3) {
        func_004D80A4(&fStack_24,*(uint *)(param_1 + 1000),DAT_004f7b88);
        fStack_20 = DAT_004f7b8c;
        iVar3 = *(int *)(param_1 + 0x420);
        if (iVar3 != 0) {
          bVar2 = false;
          if (*(float *)(iVar3 + 0x24) == DAT_004f7b8c) {
            bVar2 = *(float *)(iVar3 + 0x2c) == DAT_004f7b8c;
          }
          if (!bVar2) {
            uStack_1c = *(undefined4 *)(iVar3 + 0x2c);
            fStack_24 = *(float *)(iVar3 + 0x24);
            func_00115DC8(&fStack_24);
          }
        }
        iVar3 = func_005569D4(*piVar1,&fStack_24,(float *)(param_2 + 0x10),*(uint *)(param_2 + 0x24)
                              ,0);
        if (iVar3 != 0) {
          *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x2000000;
        }
      }
      return 1;
    }
  }
  else {
    bVar2 = func_003248BC(*(undefined4 **)(param_1 + 0x438),param_2);
    if (bVar2) goto LAB_004f7a90;
  }
  return 0;
}

