#include "ghidra_types.h"

extern int func_00108010(void);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010D0F4(int param_1,int param_2,int param_3);
extern int func_0010D150(int param_1,int param_2,int param_3,uint param_4,int param_5);
extern int func_0010D638(int param_1,int param_2,int *param_3);
extern int func_0010D78C(undefined4 *param_1,int *param_2);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern int *DAT_0010ca3c;
extern undefined4 DAT_0010ca40;
extern int *DAT_0010ca44;
extern int *DAT_0010ca48;

// USA 0010C930 <- EU 0010C930 (Ghidra, non-matching)
// GLOBAL DAT_0010ca3c int *
// GLOBAL DAT_0010ca40 undefined4
// GLOBAL DAT_0010ca44 int *
// GLOBAL DAT_0010ca48 int *

int func_0010C930(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar1 = DAT_0010ca3c;
  if (*DAT_0010ca3c == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x28,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_0010ca40;
      piVar1[1] = (int)puVar3;
      puVar2[5] = puVar2 + 4;
      puVar2[6] = 0;
      puVar2[4] = puVar2 + 4;
      piVar4 = DAT_0010ca44;
      puVar2[7] = 0;
      puVar2[8] = 0;
      if (*piVar4 != 0) {
        piVar4 = func_0010E2A4(*piVar4,puVar2);
        func_00108010();
        uVar5 = func_0010D0F4(0x10,0x10,1);
        iVar6 = func_0010CEE0(uVar5,piVar4,4);
        puVar2[9] = iVar6;
        func_0010D150(0x10,0x10,iVar6,uVar5,1);
        puVar7 = (undefined4 *)func_0010CF28(0x54,piVar4,4);
        puVar3 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = func_0010D78C(puVar7,piVar4);
        }
        puVar2[8] = puVar3;
        func_0010D638((int)puVar2,(int)puVar3,DAT_0010ca48);
        puVar2[7] = puVar2[8];
      }
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}

