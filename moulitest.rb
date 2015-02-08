class Moulitest < Formula
  homepage 'http://hmmer.janelia.org/'
  url 'http://selab.janelia.org/software/hmmer3/3.1b1/hmmer-3.1b1.tar.gz'

  def install
    system "./configure", "--prefix=#{prefix}"
    system "make"
    system "make install"
  end
end