#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int *DAT_003b4498;
extern undefined4 DAT_003b449c;
extern int DAT_003b44a0;
extern int *DAT_003b44a4;

// USA 003B4344 <- EU 003B4320 (Ghidra, non-matching)
// GLOBAL DAT_003b4498 int *
// GLOBAL DAT_003b449c undefined4
// GLOBAL DAT_003b44a0 int
// GLOBAL DAT_003b44a4 int *

undefined4 func_003B4344(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar2 = *(int *)(param_1 + 0x48);
  switch(*(undefined1 *)(param_1 + 0x90)) {
  case 0xe:
    iVar1 = func_004D80EC((float *)(iVar2 + 0x3d0),*(float **)(*DAT_003b4498 + 0x1c),
                          *(int *)(iVar2 + 1000));
    *(int *)(iVar2 + 1000) = iVar1;
    *(int *)(iVar2 + 0xa1c) = iVar1;
    return func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x75,10,1);
  case 0xf:
    return func_003842C0(iVar2 + 0x8c0,0x80,10,1);
  default:
    return func_003842C0(iVar2 + 0x8c0,0x78,10,1);
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x1a:
  case 0x1e:
  case 0x1f:
    return func_003842C0(iVar2 + 0x8c0,0x77,10,1);
  case 0x18:
    func_003842C0(iVar2 + 0x8c0,0x81,10,1);
    local_14 = DAT_003b449c;
    local_18 = DAT_003b44a0;
    return func_004EABB8(*DAT_003b44a4,&local_18,(undefined4 *)0x0);
  case 0x19:
    return func_003842C0(iVar2 + 0x8c0,0x81,10,1);
  case 0x1b:
  case 0x1c:
    return func_003842C0(iVar2 + 0x8c0,0x87,10,1);
  }
}

