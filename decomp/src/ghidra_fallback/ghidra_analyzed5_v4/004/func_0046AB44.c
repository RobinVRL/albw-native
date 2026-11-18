#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern int func_001B6C04(int param_1);
extern int func_002313DC(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_0046ac0c;
extern int DAT_0046ac20;
extern int *DAT_0046ac24;
extern char s_SE_S_GAME_OVER_0046ac10[];

// USA 0046AB44 <- EU 0046AB1C (Ghidra, non-matching)
// GLOBAL DAT_0046ac0c int *
// GLOBAL DAT_0046ac20 int
// GLOBAL DAT_0046ac24 int *
// GLOBAL s_SE_S_GAME_OVER_0046ac10 string

undefined4 func_0046AB44(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0xc4) = 0;
  func_002313DC(param_1 + 0x8c);
  func_001B6C04(param_1);
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002313DC(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x80) = 0;
  func_002313DC(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0xc5) = 0;
  piVar1 = DAT_0046ac0c;
  func_0016656C(*DAT_0046ac0c,param_1);
  func_00166C00(*piVar1,0);
  uVar4 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xbc);
    if (uVar4 < 2) {
      piVar1 = piVar1 + uVar4;
    }
    func_004B948C(param_1,*piVar1);
    puVar2 = (uint *)(param_1 + 0xbc);
    if (uVar4 < 2) {
      puVar2 = puVar2 + uVar4;
    }
    uVar3 = *puVar2;
    bVar5 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar5) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (bVar5 && uVar3 == 0) {
      piVar1 = (int *)(param_1 + 0xbc);
      if (uVar4 < 2) {
        piVar1 = piVar1 + uVar4;
      }
      *(undefined1 *)(*piVar1 + 0xe) = 1;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  local_14 = s_SE_S_GAME_OVER_0046ac10;
  local_18 = DAT_0046ac20;
  return func_00587F74(*DAT_0046ac24,&local_18,0);
}

