From CertiCoq.Plugin Require Import CertiCoq.

Set Implicit Arguments.
Unset Strict Implicit.
Unset Printing Implicit Defensive.

Definition addn10 n := n + 10.

CertiCoq Compile addn10.
