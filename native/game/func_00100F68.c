#include "ghidra_types.h"

extern int func_00101E00(int *param_1);
extern int func_00101E6C(int *param_1);
extern int func_00101ED4(int *param_1);
extern int func_00101FBC(int *param_1);
extern int func_00102070(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4);
extern int func_00102290(void);
extern int func_001022A0(void);
extern int func_001022F4(void);
extern int func_00102304(uint param_1);
extern int func_00103198(undefined4 param_1,int param_2);
extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern int func_00103210(undefined4 *param_1);
extern int func_00103220(undefined4 *param_1);
extern int func_00103230(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010CC7C(undefined4 *param_1,int param_2,int param_3,int param_4);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_001012a4;
extern int *DAT_001012a8;
extern undefined4 *DAT_001012b8;
extern undefined4 DAT_001012bc;
extern undefined4 DAT_001012c0;
extern undefined4 DAT_001012c4;
extern undefined4 DAT_001012c8;
extern undefined4 DAT_001012cc;
extern undefined4 DAT_001012d0;
extern int *DAT_001012d4;
extern undefined4 DAT_001012e8;
extern undefined4 DAT_001012ec;
extern undefined4 DAT_001012f0;
extern undefined4 *DAT_001012f4;
extern int DAT_001012f8;
extern undefined4 DAT_001012fc;
extern char s_Framework_001012ac[];
extern char s_GraphicSystem_001012d8[];
extern char s_RootHeapMemory_00101294[];

// USA 00100F68 <- EU 00100F68: framework bootstrap (device memory, RootHeap, sead Framework,
// GraphicSystem, then Framework::run via vtable +0x10 = the game's main loop).
// Native changes from the Ghidra decompilation: RootHeap at the host heap region instead of the
// fixed 3DS address 0x08040000 (native/sdk/memory.c), and the stack temporary below the locals.
void *albw_os_heap_address(void);
// GLOBAL DAT_001012a4 undefined4
// GLOBAL DAT_001012a8 int *
// GLOBAL DAT_001012b8 undefined4 *
// GLOBAL DAT_001012bc undefined4
// GLOBAL DAT_001012c0 undefined4
// GLOBAL DAT_001012c4 undefined4
// GLOBAL DAT_001012c8 undefined4
// GLOBAL DAT_001012cc undefined4
// GLOBAL DAT_001012d0 undefined4
// GLOBAL DAT_001012d4 int *
// GLOBAL DAT_001012e8 undefined4
// GLOBAL DAT_001012ec undefined4
// GLOBAL DAT_001012f0 undefined4
// GLOBAL DAT_001012f4 undefined4 *
// GLOBAL DAT_001012f8 int
// GLOBAL DAT_001012fc undefined4
// GLOBAL s_Framework_001012ac string
// GLOBAL s_GraphicSystem_001012d8 string
// GLOBAL s_RootHeapMemory_00101294 string

void func_00100F68(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_108 (*(undefined4 *)(albw_frame + 0x8))
  #define local_104 (*(char * *)(albw_frame + 0xc))
  #define local_100 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_fc (*(undefined4 *)(albw_frame + 0x14))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ec (*(undefined4 *)(albw_frame + 0x24))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_e4 (*(char * *)(albw_frame + 0x2c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_dc (*(undefined4 *)(albw_frame + 0x34))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_cc (*(int *)(albw_frame + 0x44))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x54))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_ac (*(char * *)(albw_frame + 0x64))
  #define local_30 ((undefined4 *)(albw_frame + 0xe0))
  iVar2 = func_00102290();
  uVar12 = func_001022A0();
  func_00102304((iVar2 - (int)uVar12) - 0x60000U & 0xfffff000);
  func_00103210(local_30);
  local_30[0] = func_001022F4();
  func_0010B47C(local_30);
  uVar8 = DAT_001012a4;
  local_104 = s_RootHeapMemory_00101294;
  local_108 = DAT_001012a4;
  piVar3 = func_0010CC7C((undefined4 *)((char *)albw_os_heap_address() + 0x40000) /* 3DS: fixed 0x08040000 */,0x20000,(int)&local_108,0);
  piVar9 = DAT_001012a8;
  if (*DAT_001012a8 < DAT_001012a8[1]) {
    *(int **)(DAT_001012a8[2] + *DAT_001012a8 * 4) = piVar3;
    iVar2 = *piVar9 + 1;
    *piVar9 = iVar2;
  }
  else {
    iVar2 = *DAT_001012a8;
  }
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)piVar9[2];
  }
  local_ac = s_Framework_001012ac;
  local_b0 = uVar8;
  piVar4 = func_0010B954(0,(int)&local_b0,piVar3,1,0);
  puVar1 = DAT_001012b8;
  if (piVar4 == (int *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_001012b8,piVar4);
  }
  func_00101E00((int *)0x0);
  if (iVar2 != 1) {
    func_0010983C(*puVar1,iVar2);
  }
  uStack_fc = 0x140;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 1;
  uStack_d4 = 0x100000;
  uStack_d0 = 0x100;
  local_c8 = 0x600000;
  uStack_c0 = 0;
  uStack_bc = 0x4000;
  local_e4 = (char *)DAT_001012cc;
  local_e0 = DAT_001012cc;
  local_dc = DAT_001012cc;
  local_d8 = DAT_001012c0;
  uVar10 = 4;
  local_cc = *DAT_001012d4;
  local_c4 = DAT_001012d0;
  local_108 = 0xf0;
  local_104 = (char *)0x190;
  local_100 = 0xf0;
  uVar11 = DAT_001012c8;
  puVar5 = (undefined4 *)func_0010CF28(0x198,piVar4,4);
  piVar6 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar6 = (int *)func_00102070(puVar5,(byte *)&local_108,uVar10,uVar11);
  }
  (**(code **)(*piVar4 + 0x14))(piVar4);
  local_e4 = s_GraphicSystem_001012d8;
  local_e8 = uVar8;
  piVar7 = func_0010B954(0,(int)&local_e8,piVar3,1,0);
  local_f0 = DAT_001012ec;
  local_ec = DAT_001012e8;
  piVar4 = DAT_001012d4;
  *(int **)(*DAT_001012d4 + 0x28) = piVar7;
  local_f8 = DAT_001012f0;
  local_f4 = local_ec;
  (**(code **)(*piVar6 + 0x98))(piVar6,piVar7,&local_f8,&local_f0);
  func_00103198(piVar6,0);
  (**(code **)(*piVar7 + 0x14))(piVar7);
  *(undefined4 *)(*piVar4 + 0x28) = 0;
  if (*piVar9 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)piVar9[2];
  }
  if (piVar9 == (int *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*puVar1,piVar9);
  }
  func_00101E6C(piVar9);
  func_00101ED4(piVar9);
  func_00101FBC(piVar9);
  *(undefined4 *)(DAT_001012f8 + 8) = *DAT_001012f4;
  func_00103230((int *)0x0);
  if (iVar2 != 1) {
    func_0010983C(*puVar1,iVar2);
  }
  func_001031B4(&local_b0,(undefined4 *)(albw_frame + 0x0) /* entry sp - 0x110: start of the frame */);
  uVar8 = func_00103220(&local_100);
  (**(code **)(*piVar6 + 0x10))(piVar6,piVar3,&local_b0,uVar8);
  return;
}

