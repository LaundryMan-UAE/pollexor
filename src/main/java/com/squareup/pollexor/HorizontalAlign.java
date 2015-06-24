package com.squareup.pollexor;

/** Horizontal alignment for crop positioning. */
public enum HorizontalAlign {
    LEFT("left"), CENTER("center"), RIGHT("right");

    final String value;

    private HorizontalAlign(String value) {
        this.value = value;
    }
}