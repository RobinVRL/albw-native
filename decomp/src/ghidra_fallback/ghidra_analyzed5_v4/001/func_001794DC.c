#include "ghidra_types.h"

extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00179628;
extern undefined DAT_0017962c;
extern char u__02d_00179634[];
extern char u__03d_00179640[];
extern char u__04d_0017964c[];
extern char u__05d_00179658[];

// USA 001794DC <- EU 001794DC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00179628 int
// GLOBAL DAT_0017962c undefined
// GLOBAL u_%02d_00179634 unicode
// GLOBAL u_%03d_00179640 unicode
// GLOBAL u_%04d_0017964c unicode
// GLOBAL u_%05d_00179658 unicode

uint * func_001794DC(int param_1,uint *param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(uint * *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c ((undefined2 *)(albw_frame + 0x14))
  #define local_1e (*(undefined2 *)(albw_frame + 0x32))
  if ((int)param_4 < 0) {
    param_4 = (uint)*(short *)(param_1 + param_5 * 2 + 0x60);
  }
  local_44 = (uint *)local_3c;
  uStack_40 = 0x10;
  local_1e = 0;
  local_3c[0] = 0;
  local_48 = DAT_00179628;
  if (param_3 == 2) {
    func_004994FC((int)&local_48,u__02d_00179634,param_4,0x10);
  }
  else if (param_3 == 3) {
    func_004994FC((int)&local_48,u__03d_00179640,param_4,0x10);
  }
  else if (param_3 == 4) {
    func_004994FC((int)&local_48,u__04d_0017964c,param_4,0x10);
  }
  else if (param_3 == 5) {
    func_004994FC((int)&local_48,u__05d_00179658,param_4,0x10);
  }
  else {
    func_004994FC((int)&local_48,&DAT_0017962c,param_4,0x10);
  }
  (**(code **)(local_48 + 8))(&local_48);
  puVar1 = local_44;
  (**(code **)(local_48 + 8))(&local_48);
  iVar2 = 0;
  do {
    if (*(short *)((int)local_44 + iVar2 * 2) == 0) {
      if (iVar2 < 0x40001) goto LAB_0017960c;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_0017960c:
  puVar1 = func_00178AE8(param_1,param_2,puVar1,iVar2 << 1);
  return puVar1;
}

