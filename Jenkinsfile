pipeline {
    agent any
    stages {
        stage("Build") {
            steps{
            sh(script:"make main")
            sh(script:"./main")
        }
    }
    }

}