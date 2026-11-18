#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_0045aa7c;
extern int DAT_0045aa94;
extern float DAT_0045aa98;
extern int *DAT_0045aa9c;
extern char s_L_FileStateOne_00_0045aa80[];

// USA 0045A918 <- EU 0045A8F0 (Ghidra, non-matching)
// GLOBAL DAT_0045aa7c int
// GLOBAL DAT_0045aa94 int
// GLOBAL DAT_0045aa98 float
// GLOBAL DAT_0045aa9c int *
// GLOBAL s_L_FileStateOne_00_0045aa80 string

undefined4 func_0045A918(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045aa7c + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  local_1c = s_L_FileStateOne_00_0045aa80;
  local_20 = DAT_0045aa94;
  piVar2 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
  }
  iVar3 = func_005229AC(*(int **)(*piVar2 + 0x1c),&local_20);
  func_00167E04(*(int *)(param_1 + 0x1c),iVar3,0);
  fparam_0 = DAT_0045aa98;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xf;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x12a) = 0x1c;
  *(undefined2 *)(param_1 + 0x128) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x128),fparam_0);
  iVar3 = *(int *)(param_1 + 0x1dc);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar7 = cVar1 == '\x03';
  if (bVar7) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar7 && cVar1 == '\x03') {
    func_0012C718(iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x1e0);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar7 = cVar1 == '\x03';
  if (bVar7) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar7 && cVar1 == '\x03') {
    func_0012C718(iVar3);
  }
  uVar6 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x1c4);
    if (uVar6 < 6) {
      puVar4 = puVar4 + uVar6;
    }
    uVar5 = *puVar4;
    bVar7 = *(char *)(uVar5 + 0xd) == '\x03';
    if (bVar7) {
      uVar5 = (uint)*(byte *)(uVar5 + 0xe);
    }
    if (bVar7 && uVar5 == 3) {
      piVar2 = (int *)(param_1 + 0x1c4);
      if (uVar6 < 6) {
        piVar2 = piVar2 + uVar6;
      }
      func_0012C718(*piVar2);
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 6);
  iVar3 = *(int *)(param_1 + 0x1c4);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar7 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045aa9c);
}

