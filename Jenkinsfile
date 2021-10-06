pipeline {
    agent any
    stages {
        stage("Build") {
            steps{
            sh(script:"make main", returnStatus: true, returnStdout: true)
            sh(script:"./main", returnStatus: true, returnStdout: true)
        }
    }
    }

}