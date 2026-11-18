#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00276E6C(int param_1,int param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern undefined4 DAT_0016f41c;
extern int *DAT_0016f420;
extern int DAT_0016f424;
extern int DAT_0016f428;
extern uint DAT_0016f42c;
extern int DAT_0016f430;
extern int DAT_0016f434;
extern int *DAT_0016f438;

// USA 0016F250 <- EU 0016F250 (Ghidra, non-matching)
// GLOBAL DAT_0016f41c undefined4
// GLOBAL DAT_0016f420 int *
// GLOBAL DAT_0016f424 int
// GLOBAL DAT_0016f428 int
// GLOBAL DAT_0016f42c uint
// GLOBAL DAT_0016f430 int
// GLOBAL DAT_0016f434 int
// GLOBAL DAT_0016f438 int *

undefined4 * func_0016F250(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 ((uint *)(albw_frame + 0xc))
  puVar3 = func_004ED00C(param_1,param_2);
  *puVar3 = DAT_0016f41c;
  iVar2 = DAT_0016f434;
  iVar1 = DAT_0016f430;
  iVar8 = *(int *)(*DAT_0016f420 + 0x38);
  if (iVar8 != 0) {
    uVar13 = (ulonglong)DAT_0016f42c;
    iVar7 = 0;
    iVar11 = DAT_0016f424;
    iVar12 = DAT_0016f428;
    do {
      iVar6 = (int)*(short *)((int)param_2 + iVar7 * 6 + 0x5a);
      if (iVar6 < 0) {
        return puVar3;
      }
      iVar6 = func_00276E6C(iVar8,iVar6);
      if (iVar6 != 0) {
        piVar4 = (int *)func_0010BAB4(0x88);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar1;
          piVar4[1] = iVar11;
          piVar4[2] = iVar11;
          piVar4[3] = iVar11;
          piVar4[4] = iVar11;
          piVar4[5] = iVar11;
          piVar4[6] = iVar11;
          piVar4[7] = iVar11;
          piVar4[8] = iVar11;
          piVar4[9] = iVar11;
          *(undefined2 *)(piVar4 + 10) = 0;
          piVar4[0xb] = 0;
          *(undefined1 *)(piVar4 + 0xc) = 0;
          piVar4[0xd] = iVar12;
          piVar4[0xe] = iVar12;
          piVar4[0xf] = iVar12;
          iVar9 = (int)uVar13;
          piVar4[0x10] = iVar9;
          piVar4[0x11] = iVar9;
          piVar4[0x12] = iVar9;
          piVar4[0x13] = 0;
          piVar4[0x14] = 0;
          *(undefined2 *)(piVar4 + 0x15) = 8;
          *piVar4 = iVar2;
        }
        piVar4[1] = *(int *)(iVar6 + 4);
        piVar4[2] = *(int *)(iVar6 + 8);
        piVar4[3] = *(int *)(iVar6 + 0xc);
        iVar9 = *(int *)(iVar6 + 0x14);
        iVar10 = *(int *)(iVar6 + 0x18);
        piVar4[0x16] = *(int *)(iVar6 + 0x10);
        piVar4[0x17] = iVar9;
        piVar4[0x18] = iVar10;
        func_00491624((float *)(piVar4 + 0x19),*(uint *)(iVar6 + 0x1c),*(uint *)(iVar6 + 0x20),
                      *(uint *)(iVar6 + 0x24));
        *(undefined2 *)(piVar4 + 10) = 0xa1;
        func_004356B4(piVar4);
        puVar5 = (undefined4 *)func_0010BAB4(0x48);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = func_004EDC9C(puVar5);
        }
        puVar5[6] = piVar4;
        local_44[0] = puVar3[0xb3];
        func_004EDAD0((int)puVar5,local_44);
        *(short *)(puVar5 + 0xb) = (short)param_2[0x14];
        func_004A879C(*DAT_0016f438,(int)puVar5,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x60);
  }
  return puVar3;
}

