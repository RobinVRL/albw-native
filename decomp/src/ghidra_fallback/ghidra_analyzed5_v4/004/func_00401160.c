#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004010C8(int param_1,uint *param_2);
extern int func_004016FC(int param_1,uint *param_2,int param_3);
extern int func_00401E44(int param_1,uint *param_2,int param_3);
extern int func_00402110(int param_1,uint *param_2,int param_3);
extern int func_004032F0(int param_1,int *param_2,int *param_3,int param_4,int param_5);
extern uint DAT_004013fc;
extern byte *DAT_00401400;
extern byte *DAT_00401404;
extern uint DAT_00401408;
extern uint DAT_0040140c;
extern uint DAT_00401410;

// USA 00401160 <- EU 00401140 (Ghidra, non-matching)
// GLOBAL DAT_004013fc uint
// GLOBAL DAT_00401400 byte *
// GLOBAL DAT_00401404 byte *
// GLOBAL DAT_00401408 uint
// GLOBAL DAT_0040140c uint
// GLOBAL DAT_00401410 uint

uint * func_00401160(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  if ((*(byte *)(param_3 + 0x9e) & 2) == 0) {
    param_2 = func_004016FC(param_1,param_2,param_3);
    piVar8 = *(int **)(param_3 + 0x70);
    piVar9 = *(int **)(param_3 + 0x6c);
    if (4 < *(byte *)(param_1 + 0x62a)) {
      puVar5 = func_004010C8(param_1,param_2);
      param_2 = (uint *)func_004032F0(param_1,(int *)puVar5,piVar8,(int)piVar9,1);
    }
    uVar4 = DAT_0040140c;
    uVar3 = DAT_00401408;
    uVar1 = DAT_004013fc;
    uVar6 = *(uint *)(param_3 + 0x78) & 3;
    if (uVar6 == 0) {
      if (*(char *)(param_1 + 0x62a) != '\0') {
        puVar5 = func_004010C8(param_1,param_2);
        func_00110D44(puVar5,DAT_00401400,0x18);
        puVar5[6] = 0x1100;
        puVar5[7] = uVar1;
        piVar8 = func_004032F0(param_1,(int *)(puVar5 + 8),piVar8,(int)piVar9,0);
        *(undefined1 *)(param_1 + 0x62a) = 0;
        return (uint *)piVar8;
      }
      piVar7 = *(int **)(param_1 + 0x62c);
      bVar10 = piVar7 == piVar8;
      if (bVar10) {
        piVar7 = *(int **)(param_1 + 0x630);
      }
      if (!bVar10 || piVar7 != piVar9) {
LAB_00401284:
        puVar5 = func_004010C8(param_1,param_2);
        piVar8 = func_004032F0(param_1,(int *)puVar5,piVar8,(int)piVar9,0);
        return (uint *)piVar8;
      }
    }
    else if (uVar6 == 1) {
      cVar2 = *(char *)(param_1 + 0x62a);
      if ((cVar2 == '\x01') || (cVar2 == '\x02')) {
        uVar1 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 8) << 0x10) >> 0x18;
        if (uVar1 == 1 || uVar1 == 0x13) {
          if (cVar2 != '\x02') {
            puVar5 = func_004010C8(param_1,param_2);
            param_2 = puVar5 + 2;
            *puVar5 = DAT_00401410;
            puVar5[1] = uVar4;
            *(undefined1 *)(param_1 + 0x62a) = 2;
          }
        }
        else if (cVar2 != '\x01') {
          puVar5 = func_004010C8(param_1,param_2);
          param_2 = puVar5 + 2;
          puVar5[1] = uVar4;
          *puVar5 = uVar3;
          *(undefined1 *)(param_1 + 0x62a) = 1;
        }
        piVar7 = *(int **)(param_1 + 0x62c);
        bVar10 = piVar7 == piVar8;
        if (bVar10) {
          piVar7 = *(int **)(param_1 + 0x630);
        }
        if (!bVar10 || piVar7 != piVar9) goto LAB_00401284;
      }
      else {
        puVar5 = func_004010C8(param_1,param_2);
        func_00110D44(puVar5,DAT_00401404,0x18);
        puVar5[6] = 0x1100;
        puVar5[7] = uVar1;
        param_2 = (uint *)func_004032F0(param_1,(int *)(puVar5 + 8),piVar8,(int)piVar9,0);
        uVar1 = (uint)(*(int *)(*(int *)(param_3 + 0x7c) + 8) << 0x10) >> 0x18;
        if (uVar1 == 1 || uVar1 == 0x13) {
          *puVar5 = *puVar5 & 0xfffffff0 | 0xe;
          *(undefined1 *)(param_1 + 0x62a) = 2;
          return param_2;
        }
        *(undefined1 *)(param_1 + 0x62a) = 1;
      }
    }
    else {
      if (uVar6 == 2) {
        puVar5 = func_00401E44(param_1,param_2,param_3);
        piVar8 = func_004032F0(param_1,(int *)puVar5,piVar8,(int)piVar9,0);
        return (uint *)piVar8;
      }
      if (uVar6 == 3) {
        puVar5 = func_00402110(param_1,param_2,param_3);
        piVar8 = func_004032F0(param_1,(int *)puVar5,piVar8,(int)piVar9,0);
        return (uint *)piVar8;
      }
    }
  }
  else if ((1 < *(byte *)(param_1 + 0x62a)) && (*(byte *)(param_1 + 0x62a) != 2)) {
    param_2 = func_004010C8(param_1,param_2);
  }
  return param_2;
}

