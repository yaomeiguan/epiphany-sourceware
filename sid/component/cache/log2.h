// log2.h -- Utility functions for power of two values. -*- C++ -*-

// Copyright (C) 2001 Red Hat.
// This file is part of SID and is licensed under the GPL.
// See the file COPYING.SID for conditions for redistribution.

#ifndef LOG2_H
#define LOG2_H

// Is V a power of two (ie. 32, 64)?

template <typename V>
bool power_of_two_p (const V& v1)
{
  int count = 0;
  V v2(1);

  for (int i = 0; i < 8 * sizeof (V); i++)
    if (v1 & (v2 << i))
      count++;

  // Only one bit was set in v1.
  return (count == 1);
}

// Compute log2 (V).

template <typename V>
int log2 (const V& v1)
{
  assert (power_of_two_p (v1));

  V v2(1);
  for (int i = 0; i < 8 * sizeof (V); i++)
    if (v1 & (v2 << i))
      return i;
}

#endif // LOG2_H
