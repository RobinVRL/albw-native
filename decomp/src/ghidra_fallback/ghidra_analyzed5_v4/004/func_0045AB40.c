#include "ghidra_types.h"

extern int func_00120B44(int param_1);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045A090(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0054D224(int *param_1);
extern int func_0054D240(short *param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int *DAT_0045ae78;
extern int DAT_0045ae7c;
extern int DAT_0045ae80;
extern int DAT_0045ae84;
extern int DAT_0045ae88;
extern float DAT_0045ae8c;
extern int *DAT_0045ae90;
extern int *DAT_0045ae94;
extern int DAT_0045ae98;
extern int DAT_0045ae9c;

// USA 0045AB40 <- EU 0045AB18 (Ghidra, non-matching)
// GLOBAL DAT_0045ae78 int *
// GLOBAL DAT_0045ae7c int
// GLOBAL DAT_0045ae80 int
// GLOBAL DAT_0045ae84 int
// GLOBAL DAT_0045ae88 int
// GLOBAL DAT_0045ae8c float
// GLOBAL DAT_0045ae90 int *
// GLOBAL DAT_0045ae94 int *
// GLOBAL DAT_0045ae98 int
// GLOBAL DAT_0045ae9c int

undefined4 func_0045AB40(int param_1)

{
  char cVar1;
  int *piVar2;
  float fparam_0;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  piVar2 = DAT_0045ae78;
  if (((*(char *)(DAT_0045ae7c + *DAT_0045ae78) == '\0') ||
      (bVar3 = func_0054D224((int *)(*DAT_0045ae78 + 0x9cc +
                                    *(int *)(param_1 + 0x214) * DAT_0045ae80 * 4)), !bVar3)) ||
     (bVar3 = func_0054D240((short *)(*piVar2 + *(int *)(param_1 + 0x214) * DAT_0045ae80 * 4 +
                                     0x172c)), !bVar3)) {
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045ae88 + 4);
    cVar1 = *(char *)(param_1 + 0x1a4);
  }
  else {
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045ae84 + 4);
    cVar1 = *(char *)(param_1 + 0x1a4);
  }
  if (cVar1 == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (cVar1 == '\x02') {
    func_0045A090(param_1);
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0xd;
  fparam_0 = DAT_0045ae8c;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  piVar5 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar5 = piVar5 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar5 + 200),'\x02');
  bVar3 = func_0054D224((int *)(*piVar2 + 0x9cc + *(int *)(param_1 + 0x214) * DAT_0045ae80 * 4));
  if ((bVar3) &&
     (bVar3 = func_0054D240((short *)(*piVar2 + *(int *)(param_1 + 0x214) * DAT_0045ae80 * 4 +
                                     0x172c)), bVar3)) {
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae90);
    func_00167E04(*(int *)(param_1 + 0x1c),iVar6,0);
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae94);
    return func_00167E04(*(int *)(param_1 + 0x1c),iVar6,0);
  }
  iVar6 = DAT_0045ae98;
  bVar3 = false;
  uVar9 = 0;
  do {
    iVar8 = *piVar2;
    iVar7 = *(int *)(param_1 + 0x214) * DAT_0045ae80;
    uVar4 = func_00120B44((uint)*(ushort *)(iVar6 + uVar9 * 2));
    if ((*(uint *)(iVar8 + iVar7 * 4 + 0xa0c + (uint)(uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) == 0)
    {
      iVar7 = param_1 + 0x74;
      if (uVar9 < 0xb) {
        iVar7 = param_1 + 0x74 + uVar9 * 0xc;
      }
      func_002313DC(iVar7);
    }
    else {
      iVar7 = param_1 + 0x74;
      if (uVar9 < 0xb) {
        iVar7 = param_1 + 0x74 + uVar9 * 0xc;
      }
      func_00231524(iVar7);
      bVar3 = true;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 8);
  if (!bVar3) {
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae90);
    func_00167E04(*(int *)(param_1 + 0x1c),iVar6,0);
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae94);
    func_00167E04(*(int *)(param_1 + 0x1c),iVar6,1);
    iVar6 = DAT_0045ae9c;
    uVar9 = 8;
    do {
      if (*(char *)(*(int *)(iVar6 + uVar9 * 4 + -0x20) +
                   *piVar2 + *(int *)(param_1 + 0x214) * DAT_0045ae80 * 4 + 0xa94) == '\0') {
        iVar7 = param_1 + 0x74;
        if (uVar9 < 0xb) {
          iVar7 = param_1 + 0x74 + uVar9 * 0xc;
        }
        func_002313DC(iVar7);
      }
      else {
        iVar7 = param_1 + 0x74;
        if (uVar9 < 0xb) {
          iVar7 = param_1 + 0x74 + uVar9 * 0xc;
        }
        func_00231524(iVar7);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0xb);
    return 0;
  }
  iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae90);
  func_00167E04(*(int *)(param_1 + 0x1c),iVar6,1);
  iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_0045ae94);
  return func_00167E04(*(int *)(param_1 + 0x1c),iVar6,0);
}

