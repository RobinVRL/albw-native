#include "ghidra_types.h"

extern int func_004F8254();
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_0053A440(int param_1,float *param_2,uint *param_3,int param_4,float *param_5);
extern int func_0053A720(int param_1,float *param_2);
extern int func_0053A7AC(int param_1,float *param_2);
extern int func_0053A900(int param_1);

// USA 00269108 <- EU 00269130 (Ghidra, non-matching)

bool func_00269108(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_24 ((float *)(albw_frame + 0xc))
  if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00269274;
  cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
  iVar6 = param_1 + 0xb18;
  if (cVar1 == '\x0f') {
    if (*(int *)(param_1 + 0xb28) < 1) {
      iVar6 = func_0053A900(param_1);
      if (iVar6 != 0) {
        func_0053A440(param_1,afStack_24,(uint *)(param_2 + 0x28),0xf,(float *)(param_2 + 0x10));
        bVar2 = func_0053A720(param_1,afStack_24);
        if (bVar2) goto LAB_00269274;
      }
    }
    else {
      func_0053A440(param_1,afStack_24,(uint *)(param_2 + 0x28),0xf,(float *)(param_2 + 0x10));
      uVar3 = func_0053A7AC(param_1,afStack_24);
      if (uVar3 < 5) {
        iVar6 = iVar6 + uVar3 * 0x14;
      }
      if (0 < *(int *)(iVar6 + 0x10)) goto LAB_00269274;
    }
    func_004F9554(*(int *)(param_1 + 0x430),0,7,1);
    iVar6 = *(int *)(param_1 + 0x434);
    uVar5 = 7;
    uVar4 = 0;
  }
  else {
    if (cVar1 == '\a') {
      if (((*(int *)(param_1 + 0xb28) < 1) && (iVar6 = func_0053A900(param_1), iVar6 != 0)) &&
         (bVar2 = func_0053A720(param_1,(float *)(param_2 + 0x10)), bVar2)) goto LAB_00269274;
    }
    else if (cVar1 != '\t' && cVar1 != '\n') goto LAB_00269274;
    func_004F9554(*(int *)(param_1 + 0x430),5,0,1);
    iVar6 = *(int *)(param_1 + 0x434);
    uVar5 = 0;
    uVar4 = 5;
  }
  func_004F9554(iVar6,uVar4,uVar5,1);
LAB_00269274:
  bVar2 = func_004F8254(param_1,param_2);
  return bVar2;
}

