package com.squareup.pollexor;

/** Vertical alignment for crop positioning. */
public enum VerticalAlign {
    TOP("top"), MIDDLE("middle"), BOTTOM("bottom");

    final String value;

    private VerticalAlign(String value) {
        this.value = value;
    }
}