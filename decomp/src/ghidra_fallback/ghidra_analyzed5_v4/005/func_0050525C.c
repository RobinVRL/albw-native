#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_005616A0(int *param_1,char *param_2,uint *param_3);
extern char s_HslGCol_005053d0[];
extern char s_HslSCol_005053d8[];
extern char s_HslSDir_005053e0[];
extern char s_MatAmbi_005053e8[];
extern char s_MatDiff_005053f0[];
extern char s_NormMtx_005053c0[];
extern char s_UnivReg_005053c8[];
extern char s_WrldMtx_005053b8[];

// USA 0050525C <- EU 00505234 (Ghidra, non-matching)
// GLOBAL s_HslGCol_005053d0 string
// GLOBAL s_HslSCol_005053d8 string
// GLOBAL s_HslSDir_005053e0 string
// GLOBAL s_MatAmbi_005053e8 string
// GLOBAL s_MatDiff_005053f0 string
// GLOBAL s_NormMtx_005053c0 string
// GLOBAL s_UnivReg_005053c8 string
// GLOBAL s_WrldMtx_005053b8 string

undefined4 * func_0050525C(int param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)func_0010CF28(0x48,param_4,4);
  if (puVar1 != (undefined4 *)0x0) {
    func_00110490(puVar1,0x48);
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 2;
    *(undefined1 *)((int)puVar1 + 10) = 0xff;
    *(undefined1 *)((int)puVar1 + 0xb) = 0xff;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined1 *)((int)puVar1 + 0x11) = 2;
    *(undefined1 *)((int)puVar1 + 0x12) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x13) = 0xff;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 2;
    *(undefined1 *)((int)puVar1 + 0x1a) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x1b) = 0xff;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)((int)puVar1 + 0x21) = 2;
    *(undefined1 *)((int)puVar1 + 0x22) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x23) = 0xff;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 2;
    *(undefined1 *)((int)puVar1 + 0x2a) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2b) = 0xff;
    puVar1[0xb] = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    *(undefined1 *)((int)puVar1 + 0x31) = 2;
    *(undefined1 *)((int)puVar1 + 0x32) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x33) = 0xff;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    *(undefined1 *)((int)puVar1 + 0x39) = 2;
    *(undefined1 *)((int)puVar1 + 0x3a) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x3b) = 0xff;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)((int)puVar1 + 0x41) = 2;
    *(undefined1 *)((int)puVar1 + 0x42) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x43) = 0xff;
    puVar1[0x11] = 0;
  }
  *(char *)puVar1 = (char)param_2;
  puVar1[1] = param_3;
  piVar3 = *(int **)(param_3 + 0x24);
  func_005616A0(piVar3,(char *)(puVar1 + 2),(uint *)s_WrldMtx_005053b8);
  func_005616A0(piVar3,(char *)(puVar1 + 4),(uint *)s_NormMtx_005053c0);
  func_005616A0(piVar3,(char *)(puVar1 + 6),(uint *)s_UnivReg_005053c8);
  func_005616A0(piVar3,(char *)(puVar1 + 8),(uint *)s_HslGCol_005053d0);
  func_005616A0(piVar3,(char *)(puVar1 + 10),(uint *)s_HslSCol_005053d8);
  func_005616A0(piVar3,(char *)(puVar1 + 0xc),(uint *)s_HslSDir_005053e0);
  func_005616A0(piVar3,(char *)(puVar1 + 0xe),(uint *)s_MatAmbi_005053e8);
  func_005616A0(piVar3,(char *)(puVar1 + 0x10),(uint *)s_MatDiff_005053f0);
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    puVar2 = puVar2 + param_2;
  }
  *puVar2 = puVar1;
  return puVar1;
}

