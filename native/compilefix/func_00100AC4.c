/* compilefix: USA 00100AC4 (EU 00100AC4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: called object type 'undefined' (aka 'unsigned char') is not a function or function pointer
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (*DAT_003c90XX)() (Ghidra followed an ARM->Thumb veneer ldr pc,[pc,#-4] with no arguments) -> the Thumb target called with r0-r2 unchanged; the three helpers that only tail-call 0010047C/00100404 inlined so their r0 is returned (checked in the Thumb disassembly) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"
undefined4 func_003009F4(uint *param_1,uint param_2,int param_3);
undefined4 func_0010057A(uint *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 func_00100542(uint *param_1,undefined4 param_2,undefined4 *param_3);
undefined4 func_00100404(uint *param_1,undefined4 param_2,uint param_3,uint param_4);

extern int func_00100186(uint *param_1,undefined1 *param_2,uint param_3);
extern int func_00100340(uint *param_1,int param_2,int param_3);
extern int func_00100448(uint *param_1,undefined4 param_2,uint *param_3);
extern int func_0010047C(uint *param_1,int param_2,uint param_3,uint param_4);
extern int func_00100994(uint *param_1,int param_2,int param_3);
extern int func_00100A24(uint *param_1,undefined2 *param_2,uint param_3);
extern int func_00300076(int param_1,int *param_2);
extern int func_0030008C(uint param_1,int *param_2);
extern int func_003000A4(uint param_1);
extern int func_003000D0(uint *param_1,int param_2,int param_3,int param_4);
extern int func_00300180(uint param_1,uint param_2);
extern undefined DAT_00100240;
extern undefined DAT_001002b8;

// GLOBAL DAT_00100240 undefined
// GLOBAL DAT_001002b8 undefined
// GLOBAL DAT_003c90a8 undefined *
// GLOBAL DAT_003c90b0 undefined *
// GLOBAL DAT_003c90b8 undefined *
// GLOBAL DAT_003c90c0 undefined *
// GLOBAL DAT_003c90c8 undefined *
// GLOBAL DAT_003c90d0 undefined *
// USA 00100AC4 <- EU 00100AC4 (Ghidra, function missing from the decomp table)

undefined4 func_00100AC4(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  if (param_2 == 0x6e) {
    puVar4 = (uint *)*param_3;
    uVar7 = *param_1;
    uVar1 = param_1[8];
    if ((int)(uVar7 << 0x15) < 0) {
      *(char *)puVar4 = (char)uVar1;
    }
    else if ((int)(uVar7 << 0x17) < 0) {
      *(short *)puVar4 = (short)uVar1;
    }
    else if ((int)(uVar7 << 0x18) < 0) {
      *puVar4 = uVar1;
      puVar4[1] = (int)uVar1 >> 0x1f;
    }
    else {
      *puVar4 = uVar1;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar1 = *param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    uVar3 = func_0010047C(param_1,0x70,uVar1,0);
    return uVar3;
  }
  if (((param_2 == 0x66) || (param_2 == 0x65)) || (param_2 == 0x67)) {
                    /* WARNING: Could not recover jumptable at 0x003c90a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return func_003009F4(param_1,param_2,(int)param_3); /* veneer 003C90A4 -> Thumb EU 003009D0 */
  }
  if ((bool)((byte)(*param_1 >> 7) & 1)) {
    param_2 = param_2 | 0x80;
  }
  if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
    iVar2 = 0;
    puVar8 = (undefined *)0x10023c;
    if (param_2 == 0x75) {
      uVar1 = func_0030008C(*param_3,(int *)param_1);
    }
    else {
      uVar1 = func_00300076(*param_3,(int *)param_1);
      if ((int)uVar1 < 0) {
        uVar1 = -uVar1;
        puVar8 = &DAT_00100240;
      }
      else if ((int)(*param_1 << 0x1e) < 0) {
        puVar8 = (undefined *)0x100244;
      }
      else {
        if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00100216;
        puVar8 = (undefined *)0x100248;
      }
      iVar2 = 1;
    }
LAB_00100216:
    iVar6 = 0;
    while (uVar1 != 0) {
      uVar11 = func_003000A4(uVar1);
      *(char *)((int)param_1 + iVar6 + 0x24) = (char)((ulonglong)uVar11 >> 0x20) + '0';
      iVar6 = iVar6 + 1;
      uVar1 = (uint)uVar11;
    }
    uVar3 = func_003000D0(param_1,iVar6,(int)puVar8,iVar2);
    return uVar3;
  }
  if (param_2 == 0x6f) {
    uVar3 = func_00100448(param_1,0x6f,param_3);
    return uVar3;
  }
  if (param_2 == 0x78) {
                    /* WARNING: Could not recover jumptable at 0x003c90cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    /* veneer 003C90CC -> Thumb 001004D4: 0010047C(p1, p2, 0030008C(*p3, p1), 0) */
    return func_0010047C(param_1,(int)param_2,(uint)func_0030008C(*param_3,(int *)param_1),0);
  }
  if (((param_2 != 0xe9) && (param_2 != 0xe4)) && (param_2 != 0xf5)) {
    if (param_2 == 0xef) {
                    /* WARNING: Could not recover jumptable at 0x003c90c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      { /* veneer 003C90C4 -> Thumb 00100460: 8-aligned va slot, tail call 00100404 */
      uint *pq = (uint *)((uintptr_t)param_3 + 7U & 0xfffffff8);
      return func_00100404(param_1,(undefined4)(uintptr_t)(pq + 2),pq[0],pq[1]);
    }
    }
    if (param_2 == 0xf8) {
                    /* WARNING: Could not recover jumptable at 0x003c90bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      { /* veneer 003C90BC -> Thumb 001004F0: 8-aligned va slot, tail call 0010047C */
      uint *pq = (uint *)((uintptr_t)param_3 + 7U & 0xfffffff8);
      return func_0010047C(param_1,(int)param_2,pq[0],pq[1]);
    }
    }
    if ((bool)((byte)(*param_1 >> 6) & 1)) {
      param_2 = param_2 | 0x80;
    }
    if (param_2 == 99) {
      puVar4 = param_1 + 9;
      *(char *)puVar4 = (char)*param_3;
      *(undefined1 *)((int)param_1 + 0x25) = 0;
      if (param_1[5] == 0) {
        func_00100186(param_1,(undefined1 *)puVar4,1);
      }
      else {
        func_00100994(param_1,(int)puVar4,1);
      }
      return 1;
    }
    if (param_2 == 0x73) {
                    /* WARNING: Could not recover jumptable at 0x003c90b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return func_00100542(param_1,param_2,(undefined4 *)param_3); /* veneer 003C90B4 -> Thumb 00100542 */
    }
    if (param_2 == 0xe3) {
      *(short *)(param_1 + 9) = (short)*param_3;
      *(undefined2 *)((int)param_1 + 0x26) = 0;
      if (param_1[5] == 0) {
        func_00100340(param_1,(int)(param_1 + 9),1);
      }
      else {
        func_00100A24(param_1,(undefined2 *)(param_1 + 9),1);
      }
      return 1;
    }
    if (param_2 == 0xf3) {
                    /* WARNING: Could not recover jumptable at 0x003c90ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return func_0010057A(param_1,param_2,(undefined4 *)param_3); /* veneer 003C90AC -> Thumb 0010057A */
    }
    return 0;
  }
  iVar9 = 0;
  puVar8 = (undefined *)0x1002b4;
  piVar5 = (int *)((int)param_3 + 7U & 0xfffffff8);
  iVar2 = *piVar5;
  iVar6 = piVar5[1];
  if (param_2 != 0xf5) {
    if (iVar6 < 0) {
      bVar10 = iVar2 != 0;
      iVar2 = -iVar2;
      iVar6 = -(uint)bVar10 - iVar6;
      puVar8 = &DAT_001002b8;
    }
    else if ((int)(*param_1 << 0x1e) < 0) {
      puVar8 = (undefined *)0x1002bc;
    }
    else {
      if (-1 < (int)(*param_1 << 0x1d)) goto LAB_0010028a;
      puVar8 = (undefined *)0x1002c0;
    }
    iVar9 = 1;
  }
LAB_0010028a:
  uVar11 = CONCAT44(iVar6,iVar2);
  iVar2 = 0;
  while( true ) {
    uVar1 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar7 = (uint)uVar11 | uVar1;
    if (uVar7 == 0) break;
    uVar11 = func_00300180((uint)uVar11,uVar1);
    *(char *)((int)param_1 + iVar2 + 0x24) = (char)uVar7 + '0';
    iVar2 = iVar2 + 1;
  }
  uVar3 = func_003000D0(param_1,iVar2,(int)puVar8,iVar9);
  return uVar3;
}

