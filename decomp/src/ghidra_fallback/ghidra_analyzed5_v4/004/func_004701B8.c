#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002E28B8(uint *param_1,uint param_2,uint param_3);
extern int func_0031BB30(undefined4 param_1);
extern int func_00368BB4(int param_1,undefined1 *param_2);
extern int func_00368C70(int param_1);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern int func_00548798(int *param_1);
extern int func_00557568(int param_1);
extern int func_005575E4(int param_1,int param_2);
extern int func_00557698(int param_1,uint param_2);
extern int func_0066E304(undefined4 *param_1,undefined1 param_2);
extern float DAT_004702f0;

// USA 004701B8 <- EU 00470190 (Ghidra, non-matching)
// GLOBAL DAT_004702f0 float

undefined4 func_004701B8(int param_1)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((char *)(albw_frame + 0x0))
  uVar3 = func_00557568(*(int *)(param_1 + 0xe0));
  fparam_0 = DAT_004702f0;
  if (uVar3 == 0) {
    local_20[0] = ' ';
    iVar6 = func_00368BB4(*(int *)(param_1 + 0xe0),local_20);
    if ((iVar6 != 0) && (*(char *)(param_1 + 0xef) != local_20[0])) {
      *(char *)(param_1 + 0xef) = local_20[0];
      return func_0066E304((undefined4 *)(param_1 + 0x74),4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xc2) = 6;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    func_002317C0((undefined2 *)(param_1 + 0xc0),fparam_0);
    bVar1 = func_00557698(*(int *)(param_1 + 0xe0),0);
    uVar4 = func_0031BB30((uint)bVar1);
    bVar1 = func_00557698(*(int *)(param_1 + 0xe0),1);
    uVar5 = func_0031BB30((uint)bVar1);
    func_002E28B8((uint *)(*(int *)(param_1 + 0xe4) + 4),uVar5,uVar4);
    iVar6 = func_00548798((int *)(*(int *)(param_1 + 0xe4) + 4));
    bVar2 = func_005575E4(*(int *)(param_1 + 0xe0),iVar6);
    iVar6 = func_00548798((int *)(*(int *)(param_1 + 0xe4) + 4));
    func_003694B4(*(int *)(param_1 + 0xe0),iVar6,1);
    func_00368C70(*(int *)(param_1 + 0xe0));
    if (!bVar2) {
      return func_0066E304((undefined4 *)(param_1 + 0x74),1);
    }
    func_002317C0((undefined2 *)(param_1 + 0xcc),fparam_0);
    func_0066E304((undefined4 *)(param_1 + 0x74),5);
  }
  return 0;
}

