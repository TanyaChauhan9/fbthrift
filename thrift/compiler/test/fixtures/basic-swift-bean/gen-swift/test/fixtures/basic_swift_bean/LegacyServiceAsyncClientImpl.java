/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic_swift_bean;

import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
public class LegacyServiceAsyncClientImpl implements LegacyService.Async {

    @Override
    public void close() {
      throw new RuntimeException("No implemented");
    }


    @Override
    public ListenableFuture<Map<String, List<Integer>>> getPoints(
        Set<String> key,
        long legacyStuff) {
        throw new UnsupportedOperationException();
    }
}
