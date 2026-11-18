#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_002BF950(int param_1,int param_2);
extern int func_002BFBF0(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_00472b1c;
extern undefined4 DAT_00472b20;
extern int DAT_00472b34;
extern char s_B_BtnScope_00_00472b24[];

// USA 004729B8 <- EU 00472990 (Ghidra, non-matching)
// GLOBAL DAT_00472b1c undefined4
// GLOBAL DAT_00472b20 undefined4
// GLOBAL DAT_00472b34 int
// GLOBAL s_B_BtnScope_00_00472b24 string

/* WARNING: Removing unreachable block (ram,0x00472a8c) */
/* WARNING: Removing unreachable block (ram,0x00472a9c) */

undefined4 * func_004729B8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_002BFBF0(param_1);
  *puVar2 = DAT_00472b1c;
  uVar3 = DAT_00472b20;
  *(undefined2 *)(puVar2 + 0x18) = 0;
  *(undefined2 *)((int)puVar2 + 0x62) = 0xffff;
  puVar2[0x19] = uVar3;
  puVar2[0x1a] = 0;
  *(undefined2 *)(puVar2 + 0x1b) = 0;
  *(undefined2 *)((int)puVar2 + 0x6e) = 0xffff;
  puVar2[0x1c] = uVar3;
  puVar2[0x1d] = 0;
  *(undefined2 *)(puVar2 + 0x1e) = 0;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0xffff;
  puVar2[0x1f] = uVar3;
  puVar2[0x20] = 0;
  *(undefined2 *)(puVar2 + 0x21) = 0;
  puVar2[0x22] = uVar3;
  *(undefined2 *)(puVar2 + 0x24) = 0;
  puVar2[0x25] = uVar3;
  puVar2[7] = param_2;
  puVar2[0x27] = 0;
  puVar2[6] = puVar2[6] | 0x18;
  puVar2[0x1a] = param_2;
  *(undefined2 *)((int)puVar2 + 0x62) = 6;
  *(undefined2 *)(puVar2 + 0x18) = 0;
  puVar2[0x1d] = param_2;
  *(undefined2 *)((int)puVar2 + 0x6e) = 7;
  *(undefined2 *)(puVar2 + 0x1b) = 0;
  puVar2[0x20] = param_2;
  *(undefined2 *)((int)puVar2 + 0x7a) = 8;
  *(undefined2 *)(puVar2 + 0x1e) = 0;
  puVar2[0x23] = param_2;
  *(undefined2 *)((int)puVar2 + 0x86) = 9;
  puVar2[0x26] = param_2;
  *(undefined2 *)((int)puVar2 + 0x92) = 10;
  func_002C00D4((undefined4 *)puVar2[5],puVar2,(int *)0x0);
  local_14 = s_B_BtnScope_00_00472b24;
  local_18 = DAT_00472b34;
  uVar3 = func_005229AC(param_2,&local_18);
  puVar2[0x27] = uVar3;
  iVar4 = puVar2[5];
  *(undefined4 *)(iVar4 + 4) = 0;
  puVar5 = (ushort *)(iVar4 + 0x16);
  *puVar5 = *puVar5 & 0xffbf;
  func_002BF950((int)puVar2,1);
  cVar1 = *(char *)((int)puVar2 + 0xd);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)((int)puVar2 + 0xe);
  }
  if (bVar7 && cVar1 == '\0') {
    puVar2[6] = puVar2[6] & 0xfffffffb;
    if (*(char *)((int)puVar2 + 0x5d) == '\0') {
      func_00231448((int)(puVar2 + 0x24));
      puVar6 = puVar2 + 0x21;
    }
    else {
      func_00231448((int)(puVar2 + 0x21));
      puVar6 = puVar2 + 0x24;
    }
    func_002313DC((int)puVar6);
    *(undefined1 *)((int)puVar2 + 0xe) = 3;
  }
  return puVar2;
}

